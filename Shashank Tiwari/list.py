#a)sort the list in both ascending and desecending order.
print("a")
cars = [32,43,42,42,56,75,23]
cars.sort()
print(cars)
cars.sort(reverse=True)
print(cars)

print("b")
#b)create a 1 dimensional list and fetch all items from the list.
plist=['sank','ram','shikha','ashu']
print(plist)

print("c")
#c) Write a program to remove duplicates from the list.
fruit_random=['Apple','Banana','Apple','Banana','Orange','Banana','Banana','Orange','Apple','Banana','Orange']
print(f"\n\nList before removing duplicates: {fruit_random}")
fruit_distinct = list(set(fruit_random))
print(f"List after removing duplicates: {fruit_distinct}")

print("d")
#d)Print below using For loop
#XXX
#XXXXXX
Pat = ["XXX", "XXXXXX"]
for X in Pat:
  print(X)


print("e")
#e

list=['sank','SANK','ASHU','ashu']
list.sort()
print(list)

print("f")
#f
word=['zero','one','two','three','four','five','six','seven','eight','nine']
number= input("Enter number: ")
n=int(number[::-1])
while (n!=0):
    f=int(n%10)
    print(word[f], end="  ")
    n=n//10


print("g")
#g
mylist=['sank','ashu','shashank','sank']
mylist.append('sssss')
print(mylist)
mylist.extend(list)
print(mylist)
mylist.pop()
print(mylist)



print("h")
#h Remove certain items from list by uing pop and remove
thislist = ["apple", "banana", "cherry"]
thislist.remove('apple')
print(thislist)

thislist.pop()
print(thislist)


print("i")
# i)Replace a particular element in the list.
my_list = ['Banana','Banana','Apple','Mango','Banana','Mango','Mango','Apple']
print(my_list)
my_list = ['Pear' if i=='Banana' else i for i in my_list]

print(my_list)

print("j")
#j)Empty out the list
mylist.clear()
print(mylist)


print("k")
#k)Delete the list
del mylist
