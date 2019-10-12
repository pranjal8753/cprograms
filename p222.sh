#!/bin/sh
ps
echo "process status"
ps -f
echo "full listing"
ps -l
echo "long listing"
ps -a
echo "peocess of all user including processes not listed"
ps -t
echo "process runnin on terminal along listing showing memory related info" 
ps -u
echo "process of user only"
ps -e
echo "all process including user and system login"
