n = int(input())

save = [0] * (n+1)
arr = list(map(int, input().split()))

largest = n
for i in arr:
	save[i] = 1
	while(save[largest] == 1):
		print(largest, end=" ")
		largest -= 1
	print()
