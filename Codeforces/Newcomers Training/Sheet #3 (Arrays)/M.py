n = int(input())
arr = list(map(int, input().split()))
 
M = abs(arr[0]-arr[1])
for i in range(1, n-1):
	if abs(arr[i]-arr[i+1]) > M:
		M = abs(arr[i]-arr[i+1]) 
print(M)
