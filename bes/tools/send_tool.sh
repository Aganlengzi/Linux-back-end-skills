#!/bin/bash

INPUT_FILE=$1

REQ="SOME_REQ"

cat $INPUT_FILE | awk '{print $1}' | while read line
do
    echo "/path/to/xxx.php?"$REQ$line
done

