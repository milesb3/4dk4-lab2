#!/bin/bash

#Define packet arrival rates to sweep for simulation
declare -a packet_arrival_rates=("1" "3" "5" "7" "9" "11" "13" "14" "15" "17" "18" "19" "20" "21" "22" "23" "24" "25" "26" "27" "28" "29" "30")

for packet_arrival_rate in "${packet_arrival_rates[@]}"
do
    #Update packet arrival rate in main.c and simparameters.h
    sed -i "s/experiment.*csv/experiment7-${packet_arrival_rate}.csv/" main.c
    sed -i "s/PACKET_ARRIVAL_RATE.*/PACKET_ARRIVAL_RATE ${packet_arrival_rate}/" simparameters.h

    #Recompile and run simulation 
    make
    ./run
done