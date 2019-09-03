n = int(input())
arr = map(int, input().split())
 
for i in arr:
	if i > 0:
		print(1, end=' ')
	elif i < 0:
		print(2, end=' ')
	else:
		print(i, end=' ')
