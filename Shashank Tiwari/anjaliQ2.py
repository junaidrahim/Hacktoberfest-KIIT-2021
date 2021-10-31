#2.Define a dictionary and do the below
#a) Print the key and values of items defined in your dictionary
thisdict = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
print(thisdict["brand"])

#b)Add a new item to the original dictionary
x = thisdict.keys()

print(x) #before the change

thisdict["color"] = "white"

print(x) #after the change

#c)Check if a key exist in the dictionary
if "model" in thisdict:
  print("Yes, 'model' is one of the keys in the thisdict dictionary")


#d)Change value of a particular item
thisdict["year"] = 2018

#e)Copy your dict to anotherr dict
new = thisdict.copy()
print(new)
