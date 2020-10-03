str=input()
lst=[]
for c in str:
    if(not c in lst):
        lst.append(c)
if(len(lst)%2==0):
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")
