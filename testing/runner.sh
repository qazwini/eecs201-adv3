#!/bin/bash

for file in $(ls | grep "test")
do
    ./timeout.sh $file
    exst="$?"
done

if ((exst == 2))
then
    echo "TIMEOUT"
elif ((exst == 1))
then
    echo "FAILURE"
elif ((exst == 0))
then
    echo "SUCCESS"
fi
