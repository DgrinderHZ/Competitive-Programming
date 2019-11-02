n = int(input())

for _ in range(n):
	p = int(input())
	pos = list(map(int, input().split()))
	pos.sort()
	min_dist = 0
	for i in range(1, p):
		min_dist += pos[i]-pos[i-1]
	print(min_dist*2)
