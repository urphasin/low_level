import math
import random

def nPr(n, r):
    if r > n or n < 0 or r < 0:
        return 0
    return math.factorial(n) / math.factorial(n - r)

print(nPr(6, 3))



