#!/usr/bin/python

import sys
import datetime
import re

#read input (number of files)
if len(sys.argv)<=1:
    print "Supply n"
    exit(5)
n=int(sys.argv[1])

sum=0 #used to compute the final sum

print "Collating results for %d files" %(n)
print "Individual sums are:",

for i in range(10):
    #read ith file
    outFile="out%d.txt" %(i)
    f=open(outFile)
    lines=f.readlines()
    f.close()
    
    #get the sum from last line
    matches=re.findall("The sum is ([0-9]*)",lines[-1])
    if len(matches)<1:
        print "error"
    #if successful, add to the running total
    else:
        sum=sum+int(matches[0])
        print int(matches[0]),

print
print "The grand total is", sum
