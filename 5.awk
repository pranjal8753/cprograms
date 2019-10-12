#!/bin/awk
BEGIN { print "" }
{ print $1 , "\t" , $2 }
END { print " done"}
