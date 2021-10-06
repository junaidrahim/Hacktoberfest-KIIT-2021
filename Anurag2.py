thislist=["apple","banana","mango","Orange","kiwi","cherry"]
thislist.sort()
print(thislist)
thislist[1:3]=["coconut"]
print("1")
print(thislist)


thislist.sort(key=str.lower)
print(thislist)
thislist.sort(reverse=True)
print(thislist)
mylist=thislist.copy()
print(mylist)
list1=[1,2,3]
list2=["a","b","c"]
list3=list1+list2
print(list3)

list1.extend(list2)
print(list1)

x=(("apple","banana","cherry","kiwi","grapes"))
a, b, c, *d= x

print(type(a))
print(type(b))
print(type(c))
print(type(d))

