#!/bin/bash

./choice
key=$(echo $?)

if [ $key == 89 ];
then
echo "Yes!"
fi
if [ $key == 78 ];
then
echo "No!"
fi 
   
