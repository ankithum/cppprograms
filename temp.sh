#! /bin/bash

echo "enter the number"

read n

if [ $n -lt 0 ]
	then 
	echo "negative number"
else
	echo "non-neg number" 
fi

