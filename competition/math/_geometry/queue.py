from collections import deque

class Person:
    def __init__(self, data):
        self.name = data
        self.next = None

class Queue:
    def __init__(self):
        self.front = None
        self.back = None

    def enqueue(self, data: Person):
        self.back 
        pass

    
A = [10, 8, 4, 1, 2, 3, 6, 5, 7]

def twoSum(nums: list, target):
    for i, n in enumerate(nums):
        diff = target - n
        if nums.index(diff):
            return [i, nums.index(diff)]
    return -1

print(twoSum(A, 17))
print("\n\n")

v = twoSum(A, 17)
print(A[v[0]])
print(A[v[1]])