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

st=$_dir"simple_table"
buckets=$_dir"buckets_server/"
st_r=$_dir"simple_table_reduced"
out_s=$_dir"output_server"
dict_c=$1
patterns=$_dir"patterns"
source=$_dir"source_s"

#remove files
rm -rf $patterns
rm -rf $source

#iterate through strings in source
str_counter=0
while IFS= read -r opt; do
  ((str_counter++))
   str=$(echo "$opt" | sha256sum)
   echo "$str" >> $patterns
   echo "$str" | head -c 32 | xxd -r -p >> $source
done <$dict_c

echo "Found $str_counter lines in dictionary"

dd status=none if=/dev/urandom of=$source bs=16 oflag=append conv=notrunc count=$((elem_n-str_counter));

psi-simple-hashing -1 77777777777777777777777777777777 -2 0123456789ABCDEF0123456789ABCDEF -3 CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC -b 10 -p $source -i 100 -q 100 -s $buckets -p $source -f $size -r 1 -t 4 -z $st;

psi-ot -r 0 -p 3 -n $size -b 10 -a $2 -o $3 -t 1 -i $st_r -u $out_s
