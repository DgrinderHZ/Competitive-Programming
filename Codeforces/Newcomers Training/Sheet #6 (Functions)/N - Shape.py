def solve(n):
	for i in range(n):
		for j in range(0, i+1):
			print("*", end="")
		print()
n = int(input())
solve(n)
