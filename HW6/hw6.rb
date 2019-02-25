#Written by Liam Hendrickson
#CS 3560 with Chad Mourning
#Homework 3 - Changing characters with regex in Ruby

input = $stdin.read

input = input.to_str

input = input.strip

input = input.sub(/^f/i,'gh') # if the first character is f, converts it to a gh

input = input.sub(/sh$/i,'ti') #If the last 2 characters are sh, converts it to ti

x = 1

while x < ((input.length) -1) #checks for i's not at the beginning or end of the word, and replaces them with an o
	if input[x] == 'i'
		input = input.sub(input[x], 'o')
	elsif input[x] == 'I'
		input = input.sub(input[x], 'o')
	end
	x+=1
end

puts input

