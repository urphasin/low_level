import math

def nCr(n, r):
    if r > n or r < 0 or n < 0:
        return 0
    return math.factorial(n) / (math.factorial(n - r) * math.factorial(r))
