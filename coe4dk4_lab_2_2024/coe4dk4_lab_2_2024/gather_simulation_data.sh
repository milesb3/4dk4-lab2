#!/bin/bash

#Define output filename and ensure it's empty
outfile="experiment7-all.csv"
echo "random seed, data packet arrival count, voice packet arrival count, transmitted data packet count, transmitted voice packet count, data service fraction, voice service fraction, data packet arrival rate, data mean delay, voice mean delay" > $outfile

#Loop through simulation output files
for filename in experiment7-data/*.csv
do
    grep -v "random seed," $filename >> $outfile
done