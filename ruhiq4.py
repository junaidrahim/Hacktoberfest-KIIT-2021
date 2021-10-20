# 4.Define a function which can determine if a number is odd or even
print("\n4.\n")
num = int(input("Enter a number for check odd or even: "))


def fun(num):
    if (num % 2 == 0):
        print(num, " Is an even")
    else:
        print(num, " is an odd")


fun(num)
