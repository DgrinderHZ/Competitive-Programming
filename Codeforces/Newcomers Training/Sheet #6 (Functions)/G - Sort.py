def solve(a):
	for i in range(len(a)):
		for j in range(len(a)):
			if a[j] > a[i]:
				a[i], a[j] = a[j], a[i]
	return a
 
n = int(input())
arr = list(map(int, input().split()))

arr = solve(arr)
for i in range(len(arr)-1):
	print(arr[i], end=" ")
print(arr[-1])

