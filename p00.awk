#!/bin/awk
BEGIN {print "START"
{print $1 "\t" $3}
END {print "DONE"}
