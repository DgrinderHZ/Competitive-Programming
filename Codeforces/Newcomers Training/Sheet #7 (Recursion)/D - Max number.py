// The 6th test case can't be read appropriately using this implementation
// try it with C++
def solve(a, max, i):
	if i >= len(a) or len(a) == 1:
		return max
	elif (a[i] > max):
		return solve(a, a[i], i+1)
	else:
		return solve(a, max, i+1)
 
 
n = int(input())
a = list(map(int, input().split()))
 
print(solve(a, a[0], 1))
