choice = input('''
Please select the type of operation you want to perform:
+ for addition
- for subtraction
* for multiplication
/ for division
''')
 
num_1 = int(input('Enter your first number: '))
num_2 = int(input('Enter your second number: '))
 
if choice == '+':
    print('{} + {} = '.format(num_1, num_2))
    print(num_1 + num_2)
 
elif choice == '-':
    print('{} - {} = '.format(num_1, num_2))
    print(num_1 - num_2)
 
elif choice == '*':
    print('{} * {} = '.format(num_1, num_2))
    print(num_1 * num_2)
 
elif choice == '/':
    print('{} / {} = '.format(num_1, num_2))
    print(num_1 / num_2)
 
else:
    print('Enter a valid operator, please run the program again.')
