def solve(a, i):
	if i >= 0:
		if i % 2 == 0:
			print(a[i], end=' ')
		solve(a, i-1)
	else:
		return
 
 
n = int(input())
 
arr = list(map(int, input().split()))
 
solve(arr, len(arr)-1)
