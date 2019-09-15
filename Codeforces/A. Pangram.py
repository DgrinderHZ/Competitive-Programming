n = int(input())

freq = [0] * 26
s = input()

for i in s:
	if str(i).isupper():
		freq[ord(i)-65] += 1
	else:
		freq[ord(i)-97] += 1

if 0 in freq:
	print("NO")
else:
	print("YES")
