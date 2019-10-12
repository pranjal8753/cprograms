#!/bin/sh

a=20
b=20
c=4

val=`expr $a + $b`
echo "sum = $val"

val=`expr $a - $b`
echo "dif = $val"

val=`expr $a / $b`
echo "div = $val"

val=`expr $a \* $b`
echo "mul = $val"

val=`expr $a % $b`
echo "mod = $val"


if [ $a == $b ]
then
echo " a is equal to b"
else
echo "a is not equal b"
fi

if [ $a != $b ]
then
echo "a is not equal"
else
echo "a is equal to b"
fi

if [ $a -lt 30 -a $b -gt 10 ]
then 
echo "true"
else 
echo "false"
fi


