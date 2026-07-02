# import math
import random

def printMatrix(matrix, m, n):
    for i in range(m):
        for j in range(n):
            print(matrix[i][j], end="\t")
        print(end="\n\n")

m = 7
n = 12


# generate an m x n matrix with random values from 0 to 10
matrix = [[random.randint(0, 10) for _ in range(n)] for _ in range(m)]

printMatrix(matrix=matrix, m=m, n=n)