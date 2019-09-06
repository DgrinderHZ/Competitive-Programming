def solve(a, i):
	if i < len(a)-1:
		print(a[i], end=' ')
		solve(a, i+1)
	elif i == len(a)-1:
		print(a[i])
		return
 
 
n = int(input())

for _ in range(n):
	s = input()
	solve(s, 0)

