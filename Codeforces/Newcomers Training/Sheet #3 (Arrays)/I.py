 
n = int(input())
arr = list(map(int, input().split()))
 
m = min(arr)
f = arr.count(m)
if f % 2 == 1:
	print("Lucky")
else:
	print("Unlucky")
