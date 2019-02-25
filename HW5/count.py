#Liam Hendrickson
#CS 3560 with Chad Mourning
#Homework 5 - counting all lines, words, and chars in a directory


import sys

for lines in sys.stdin:
	words = lines.split() #breaks the line into an array of strings
print("Total lines  in directory: ", words[0])
print("Total words in directory: ", words[1])
print("Total characters in directory: ", words[2])
