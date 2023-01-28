#!/bin/sh

echo 'python -m SimpleHTTPServer 8999'
hostname -i
python -m SimpleHTTPServer 8999
