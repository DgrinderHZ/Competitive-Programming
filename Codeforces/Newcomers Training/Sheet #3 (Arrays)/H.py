T = int(input())
for _ in range(T):
	n = int(input())
	arr = list(map(int, input().split()))
 
	arr.sort()
	print(arr[0]+arr[1])
