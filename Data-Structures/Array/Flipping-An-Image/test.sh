#!/bin/bash
input="./test.txt"

#empty results file before you start writing to it
> test.results

#read test.txt line by line and echo to terminal
while IFS= read -r line
do
    printf "INPUT=================\n" >> test.results
    #since this is a two d array the number of lines is going to be different for every
    #array so read in the first line that says the size since its n by n that says how many
    #lines to read in
    for i in 3 
    do
        read -r line2
        echo "$line2" >> test.temp
        echo "$line2" >> test.results
    done
    #read in expected output
    read -r line3
    #also write these lines to the test.results file
    printf "EXPECTED OUTPUT=======\n" >> test.results
    echo "$line3" >> test.results
    printf "OUTPUT================\n" >> test.results
    cat test.temp | ./flipping-an-image >> test.results
done < "$input"

rm test.temp
cat test.results
