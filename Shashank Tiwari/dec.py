#1.Define a dictionary and do the below
#a) Print the key and values of items defined in your dictionary
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
x = thisdict.keys()
print(x)
y = thisdict.values()
print(y)

#b)Add a new item to the original dictionary
thisdict.update({"color": "red"})
x = thisdict.keys()
print(x)


#c)Check if a key exist in the dictionary
if "brand" in thisdict:
  print("Yes")

#d)Change value of a particular item
thisdict["year"] = 2020
print(y)

#Copy your dict to another dict
mydict = thisdict.copy()
print(mydict)
