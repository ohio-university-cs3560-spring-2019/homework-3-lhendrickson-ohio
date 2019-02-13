# Written by Liam Hendrickson
#   for CS 3560 with Chad Mourning
# Homework 4 - Euler Project problem 1
# Desc: Find the sum of all natural numbers 1-1000 non inclusive
#       that are multiples of 3 or 5

def main():
    s = 0 #summation of the natural numbers 
    x = 1

    while x < 1000: #the loop to add multiples of 3 or 5
        if (x%3==0) or (x%5==0):
            s+= x
        x+=1

    print("\nThe solution to problem 1 is:  ", s)


main()
