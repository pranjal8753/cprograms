#!/bin/sh
file="rish.sh"
if [ -r $file ]
then
echo "file has read permission"
else
echo "file does not have read permission"
fi
if [ -w $file ]
then
echo "file has write permission"
else
echo "file does not have write permission"
fi
if [ -x $file ]
then
echo "file has execute permission"
else
echo "file does not have execute permission"
fi
if [ -f $file ]
then
echo "file is ordinary file"
else
echo "file is a special file"
fi
if [ -d $file ]
then
echo "file is a directory"
else
echo "file is not a directory"
fi
if [ -s $file ]
then
echo "file size is zero"
else
echo "file size is greater than zero"
fi
if [ -e $file ]
then
echo "file exists"
else
echo "file doesnot exists"
fi
