n = int(input())
arr = list(map(int, input().split()))
 
low = arr[0]
p = 0
for i in range(1, len(arr)):
	if arr[i] < low:
		low = arr[i]
		p = i
print(low, p+1)
