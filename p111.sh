#!/bin/sh
a=2
b=3
val=` expr $a + $b `
echo "sum = $val"
val=` expr $a \* $b `
echo "product = $val"
val=` expr $b / $a `
echo "quotient = $val"
val=` expr $a % $b `
echo "modulus = $val"
if [ $a==$b ]
then
echo "a is equal to b"
else
echo "a is not equal to b"
fi
if [ $a!=$b ]
then 
echo "a is not equal to b"
else 
echo "a is equal to b"
fi
if [ $a -lt 10 -o $b -gt 20 ]
then 
echo "true"
else
echo "false"
fi
if [ $a -lt 10 -a $b -gt 20 ]
then 
echo "true"
else
echo "false"
fi

