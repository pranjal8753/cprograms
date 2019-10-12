#!/bin/sh
file=pp001.sh
if [ -r $file ]
then 
echo "file has read permission"
else 
echo " file do not have read permission"
fi
if [ -w $file ]
then 
echo "file has write permission"
else
echo "file do not have write permission"
fi
if [ -x $file ]
then 
echo "file has execute permission"
else
echo "file do not have execute permision"
fi
if [ -d $file ]
then 
echo "file is a directory"
else
echo "file is not a directory"
fi 
if [ -f $file ]
then 
echo "file is ordinary file"
else 
echo "file is special file"
fi
if [ -s $file ]
then
echo "file has size"
else 
echo "file do not have size"
fi
if [ -e $file ]
then
echo "file exist"
else 
echo "file does not exist"
fi
if [ -c $file ]
then
echo "charcter file"
else
echo "not a character file "
fi 
