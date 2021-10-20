mytup =("apple","orange","banana")
print(type(mytup))
x=tuple(mytup)
print(x)
print(mytup.index("orange"))


thisset={"apple","banana","cherry"}
tropical ={"pineapple","mango","papaya"}
thisset.update(tropical)  #merge two set

thisset.remove("banana")
