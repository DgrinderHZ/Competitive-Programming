def solve(a):
	if a == 0:
		return 0
	elif a == 1:
		return 1
	else:
		return solve(a-1)+solve(a-2)
 
 
n = int(input())
 
print(solve(n))
