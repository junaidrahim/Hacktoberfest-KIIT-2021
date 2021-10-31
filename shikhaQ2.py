#2.Define a function which will determine if a number is even or odd.
def find(num):

    if num%2 == 0:
        return "even"
    return "odd"

num = int(input('Enter the number: '))      
numtype = find(num)
print('Given number is',numtype)
