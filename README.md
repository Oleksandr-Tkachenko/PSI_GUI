# Private Set Intersection (PSI)
###GUI###
---
__Install:__
```
./configure.sh
```
```
sudo make install
```
__Clean:__ 
```
sudo make clean
```

__Remove:__ 
```
sudo make uninstall
```

This GUI provides fast and comfortable way of using following PSI modules:
* psi-naive-hashing(server, client)
* psi-ot(server, client)
* psi-demonstrator(server, client)
* psi-cuckoo-hashing
* psi-intersection
* psi-simple-hashing

You can find informations and configuration recommendations for separate
 protocols at their own github repositories.

###Demonstrator:
---
A simple demo is included in GUI. You can try out the OT-based PSI protocol 
by including a text file with arbitrary contents and clicking on the start button. 
Every line in this text file will be interpreted as an element.

The demonstrator is a bash script, so you can also analyze how you can use the 
single PSI tools. Scripts are placed in the "scripts" folder in source's root 
directory.

###Dependencies:
---
* qt4-dev-tools
* lpsi-util
* psi-naive-hashing
* psi-cuckoo-hashing
* psi-intersection
* psi-simple-hashing
* psi-ot

---
http://encrypto.de