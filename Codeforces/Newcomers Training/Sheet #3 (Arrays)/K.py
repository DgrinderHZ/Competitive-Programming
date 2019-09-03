def solve(arr, n):
	for i in range(n):
		for j in range(i, n):
			sub = arr[i:j+1]
			print(max(sub) , end =" ")
 
t = int(input())
for _ in range(t):
	n = int(input())
	arr = list(map(int, input().split()))
	solve(arr, n)
	print()
