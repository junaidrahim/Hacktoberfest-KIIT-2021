# Python3 program to remove duplicate
# tuples from list of tuples

def removeDuplicates(lst):
    return [t for t in (set(tuple(i) for i in lst))]


# Driver code
lst = [(1, 2), (5, 7), (3, 6), (1, 2)]
print(removeDuplicates(lst))
