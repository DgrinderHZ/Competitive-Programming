def solve(a):
	m = M = a[0]
	for i in a:
		if i > M:
			M = i
		if i < m:
			m = i
	print(m, M)
 
n = int(input())
arr = list(map(int, input().split()))
 
solve(arr)
 
 
