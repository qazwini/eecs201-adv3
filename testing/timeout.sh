#!/bin/bash

./${1}

if (($? == 1))
then
    exit 1
elif (($SECONDS > 3))
then
    exit 2
fi
