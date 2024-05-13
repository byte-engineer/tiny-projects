from time import time as tm
from time import sleep as slp

def Is_prime(number):
    for div in range(2, number, 2):   # Chech if the number is divisible to all the number the less than it,
        if (number % div) == 0 :      # If it retutn 0 that mean the munber is divisible , So is not prime.
            return False
    return True                       # Other wise number is prime.


num_range = int(input("Python script to get a Prime numbers.\nEnter the range >>> "))
print()
tm1 = tm()
i = 0
for num in range((num_range - 1)):

    if Is_prime((num + 2)):
        i += 1
        znum = str((num + 2)).zfill(len(str(num_range)))
        print(f"{znum} --> prime   | {i}")

tm2 = tm()

print (f"time = {tm2 - tm1}")

print("Quit after 60 seconds")
slp(60)
