#!/bin/sh
file="p111.sh"
if [ -r $file ]
then
echo "file has read permission"
else 
echo "file donot have read permission"
fi
