#!/bin/bash

for i in `seq 0 9`;
do
outFile="out$i.txt"
./sum.out $i > $outFile
done

echo "finished"