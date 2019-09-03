line = input().split()
 
a = int(line[0])
b = int(line[2])
op = line[1]
c = int(line[-1])
 
if op == "+":
	if a + b == c:
		print("Yes")
	else:
		print(a+b)
elif op == "-":
	if a - b == c:
		print("Yes")
	else:
		print(a-b)
elif op == "*":
	if a * b == c:
		print("Yes")
	else:
		print(a*b)
