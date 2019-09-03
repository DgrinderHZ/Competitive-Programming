def allEven(arr):
	for i in arr:
		if i % 2 == 1:
			return False
	return True
 
n = int(input())
 
arr = list(map(int, input().split()))
c = 0
while allEven(arr):
	c += 1
	arr = [i/2 for i in arr]
	
print(c)
