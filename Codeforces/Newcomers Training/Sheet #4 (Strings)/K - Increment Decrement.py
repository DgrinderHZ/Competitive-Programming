s = input()
x = 0
m = x
for i in s:
	if i == 'I':
		x += 1
	else:
		x -= 1
	if x > m:
		m = x
print(m)
