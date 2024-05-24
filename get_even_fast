import numpy as np
from time import time as tm


def is_even(number):
    if number & 1 == 0:
        return True
    return False

def find_even_numbers(start,stop):
    # np.arange() faster than range()
    return filter(is_even,np.arange(start,stop))


# formated
def printFormat(x):
    return "even --> |"+str(x)
    
print("Python script to get a Prime numbers.")
number=int(input("Enter the range >>>"))
tm1 = tm()

# print take lots of time so i use one print
print(str(list(map(printFormat, list(find_even_numbers(0,number))))).replace("\'","").replace("[","").replace("]","").replace(",","\n"))
tm2 = tm()
print (f"time = {tm2 - tm1}")
# 10_000
# 0.5017805099487305
