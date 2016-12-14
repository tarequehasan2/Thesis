#!/bin/sh
gcc -O -o Snowball compiler/*.c
./Snowball banglaStemming.sbl -o q/bangla -ep H_ -utf8
./Snowball banglaStemming.sbl -o q/bangla -java -ep H_ -utf8
gcc -o B_prog q/*.c
./B_prog input.txt -o output.txt
