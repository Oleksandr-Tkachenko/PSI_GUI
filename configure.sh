#!/bin/bash

resources_dest=~/.PSI_GUI/images
resources_file=images.qrb 
scripts_dest=~/.PSI_GUI/
scripts_dir=scripts/

qmake -o Makefile PSI_GUI.pro
mkdir -p $resources_dest

cp $resources_file $resources_dest 
cp -R $scripts_dir $scripts_dest 
