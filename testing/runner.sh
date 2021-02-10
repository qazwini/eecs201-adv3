#!/bin/bash

for file in $(ls | grep "test")
do
    ./${file}
done
