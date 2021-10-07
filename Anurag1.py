s2= "I am learning Python everyday"
s1="Python"

def check(s2, s1):
    if (s2.count(s1) > 0):
        print("YES")
    else:
        print("NO")



check(s2, s1)

#b
print(len(s1))

#c

print(s2.replace("Python","C++"))

#d

print(s2.upper())

#e
s2 = s2[:-1]
print(s2)
