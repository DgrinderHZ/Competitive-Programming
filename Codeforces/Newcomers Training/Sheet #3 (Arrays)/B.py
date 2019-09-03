n = int(input())
arr = list(map(int, input().split()))
 
for i in range(len(arr)):
	if arr[i] <= 10:
		print("A[%d] = %d" % (i, arr[i]))
