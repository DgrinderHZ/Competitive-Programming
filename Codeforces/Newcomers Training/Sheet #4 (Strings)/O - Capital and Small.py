# Hello World program in Python
s = input()
n = ""
for i in s:
	if str(i).isupper():
		n += str(i).lower()
	elif str(i).islower():
		n += str(i).upper()
print(n)
