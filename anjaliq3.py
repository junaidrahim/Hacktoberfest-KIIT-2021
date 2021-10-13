

#2.Define a Tuple with couple of items and do the below
t=('apple','mango','banana','watermelon')

#a)Add a new item to the Tuple
x=list(t)
x.append('papaya')
t=tuple(x)
print(t)

#b)Remove the 2nd item from the tuple
x=list(t)
del x[1]
t=tuple(x)
print(t)

#c)Unpack the tuple to different variables.
a,b,c,d=t
print(a)
print(b)
print(c)
print(d)

#d)From your list items, upack last 3 items to a sigle variable.
a,*b=t
print(a)
print(c)
print(b)
