def solve(s):
	rs = s[::-1]
	if s == rs:
		print('YES')
	else:
		print('NO')
s = input()
solve(s)
