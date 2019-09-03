def solve(arr, n):
	f = 0
	for i in range(n):
		for j in range(i+1,n):
			if arr[i]*arr[j] in arr:
				continue
			else:
				f = 1
				break
	if f:
		print("no")
	else:
		print("yes")
 
t = int(input())
for _ in range(t):
	n = int(input())
	arr = list(map(int, input().split()))
	solve(arr, n)
