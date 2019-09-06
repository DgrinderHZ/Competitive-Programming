def solve(a, i, s):
	if i < len(a):
		s += a[i]
		solve(a, i+1, s)
	else:
		print (s)
		return
 
 
n = int(input())
 
arr = list(map(int, input().split()))
 
solve(arr, 0, 0)
