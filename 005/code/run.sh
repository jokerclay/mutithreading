#!/bin/bash

set -xe
gcc -ggdb main.c -o main -lpthread
./main

