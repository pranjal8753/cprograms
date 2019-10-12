#!/bin/sh

echo "process status "
ps

echo "full listing "
ps -f

echo " process status along with memory related information "
ps -l

echo "process of users only"
ps -u

echo "process of user and system "
ps -e

echo "process of user and not running o terminal "
ps -a

echo "process running on terminal "
ps -t




