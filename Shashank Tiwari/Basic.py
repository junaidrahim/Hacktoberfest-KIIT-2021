#4.Take a string and perform below action for the string

#a)Check a particular word's existence in your string.

str1= "I am learning Python everyday"
def str_check(str1):
    if(str1.find('Everyday')==1):
        print("Yes, Everyday is present")
    else:
        print("No, Everyday is not present")
str_check(str1)

#b Count the number of letters in your string
string = "shashank";
count = 0;
for i in range(0, len(string)):
    if (string[i] != ' '):
        count = count + 1;

print("Total number of characters in a string: " + str(count));

#c)Replace a particular word with another word
st='my name is shashank'
print(st.replace('name is','self'))

#d)Convert all to upper case
print(st.upper())

#e)print all letters except last 1
print(st[:-1])
