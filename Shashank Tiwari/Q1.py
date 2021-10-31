#5. Write a python program to count the number of each vowel.
print("Enter the String:")
text = input()

vowela = ['a', 'A']
vowele = ['e', 'E']
voweli = ['i', 'I']
vowelo = ['o', 'O']
vowelu = ['u', 'U']
ca = 0
ce = 0
ci = 0
co = 0
cu = 0

for x in text:
    if x in vowela:
        ca = ca+1
    elif x in vowele:
        ce = ce+1
    elif x in voweli:
        ci = ci+1
    elif x in vowelo:
        co = co+1
    elif x in vowelu:
        cu = cu+1

print("\n'a' occurs ", ca)
print("'e' occurs ", ce)
print("'i' occurs ", ci)
print("'o' occurs ", co)
print("'u' occurs ", cu)
