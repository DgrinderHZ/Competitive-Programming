def solve(n):
	s = 1
	for i in range(2, n+1):
		s *= i
	print(s)
n = int(input())
solve(n)
