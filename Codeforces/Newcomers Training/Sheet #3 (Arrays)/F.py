n = int(input())
arr = list(map(int, input().split()))
arr = arr[::-1]
for i in range(n):
	print(arr[i], end= " ")
