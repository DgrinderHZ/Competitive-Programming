t, a = map(int, input().split())
l = []
for _ in range(t):
	arr = list(map(int, input().split()))
	l.extend(arr)
x = int(input())
 
if x in l:
	print("will not take number")
else:
	print("will take number")
