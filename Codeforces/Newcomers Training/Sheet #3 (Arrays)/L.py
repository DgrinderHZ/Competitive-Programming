n = int(input())
arr = list(map(int, input().split()))
 
M = max(arr)
m = min(arr)
for i in arr:
	if i == M:
		print(m, end = " ")
	elif i == m:
		print(M, end = " ")
	else:
		print(i, end = " ")
