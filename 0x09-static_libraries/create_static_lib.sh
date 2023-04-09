#!/bin/bash
gcc -fPIC -c *.c | ar -rcs liball.a *.o
