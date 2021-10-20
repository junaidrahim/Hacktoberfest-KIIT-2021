def removeDuplicate(mylist):
    newlist = []
    for num in mylist:
        if num not in newlist:
            newlist.append(num)
    return newlist

mylist=[2,4,10,20,5,2,20,4]
print(removeDuplicate(mylist))
