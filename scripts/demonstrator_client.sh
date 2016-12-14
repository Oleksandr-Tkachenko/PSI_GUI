#!/bin/bash

#_c client	_s server
#out output
#ct cuckoo hashing table	_r reduced
#st simple hashing table	_r reduced
#dict dictionary

size=1200000
elem_n=1000000

#paths
_dir="/tmp/"

out_c=$_dir"output_client"
ct=$_dir"cuckoo_table"
ct_r=$_dir"cuckoo_table_reduced"
buckets=$_dir"buckets_client/"
res=$_dir"res"
out_s_s=$_dir"output_server_shuffled"
dict_c=$1
patterns=$_dir"patterns"
source=$_dir"source_c"

#remove files
rm -rf $patterns
rm -rf $source

#iterate through strings in source
str_counter=0
while IFS= read -r opt; do
  ((str_counter++))
   str=$(echo "$opt" | sha256sum)
   echo "$str" | head -c 32 | xxd -r -p >> $source
done <$dict_c

echo "Found $str_counter lines in dictionary"

dd status=none if=/dev/urandom of=$source bs=16 oflag=append conv=notrunc count=$((elem_n-str_counter))

psi-cuckoo-hashing -1 77777777777777777777777777777777 -2 0123456789ABCDEF0123456789ABCDEF -3 CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC -l 2000 -a $source -r 100000 -p $ct -f $size -z 1

psi-ot -r 1 -p 3 -n $size -b 10 -a $2 -o $3 -t 1 -i $ct_r -u $out_c

elem_n=$(echo "$size/1.2" | bc)
mask_size=$(echo "(40 + l($elem_n)/l(2) + l($elem_n*3)/l(2) + 7) / 8" | bc -l)
mask_size=$(echo "$mask_size/1" | bc )

psi-intersection -p $res -e $mask_size -n 1000 -q 1000 -r 100000 -s $buckets -t 4 -a $out_c -b $out_s_s -x OT -c $ct -l $ct -m $out_c

str_counter=0
while IFS= read -r opt; do
  grep -q $(echo "$opt" | sha256sum | head -c 32) $res"_true"
  if [ $? -eq 0 ]; then
  echo $opt
  ((str_counter++))
  fi
done <$dict_c

echo "Found $str_counter matches"
