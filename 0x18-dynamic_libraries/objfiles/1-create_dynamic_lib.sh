#!/bin/bash
gcc -c *.c -fpic
gcc -shared *.o -o 100-operations.so
