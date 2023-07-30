#!/bin/bash

./choice
key=$(echo $?)

if [ $key == 0 ];
then
echo "Yes!"
fi
if [ $key == 1 ];
then
echo "No!"
fi 
   
