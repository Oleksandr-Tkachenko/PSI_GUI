#!/bin/bash

resources_dir=~/.PSI_GUI/images
resources_file=images.qrb

qmake -o Makefile PSI_GUI.pro
mkdir -p $resources_dir
cp $resources_file $resources_dir
