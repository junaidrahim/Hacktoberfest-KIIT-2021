i = 1
while i < 6:
  print(i)
  if i == 3:
    break
  i += 1

  i = 1
  while i < 6:
      print(i)
      if i == 3:
          continue
      i += 1

fruits = ["apple", "banana", "cherry"]
for x in fruits:
  print(x)
  if x == "banana":
    break

fruits = ["apple", "banana", "cherry"]
for x in fruits:
    if x == "banana":
     continue
    print(x)
