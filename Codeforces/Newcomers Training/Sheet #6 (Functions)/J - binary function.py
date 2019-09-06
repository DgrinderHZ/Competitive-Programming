def solve(n):
	s = ""
	while n != 0:
		if n % 2 == 1:
			s = "1"+s
		else:
			s = "0"+s
		n = n // 2
	print(s)
n = int(input())
solve(n)
