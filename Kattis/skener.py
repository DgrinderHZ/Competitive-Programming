r, c, zr, zc= map(int, input().split())

ans = [['.' for _ in range(c*zc)] for _ in range(r*zr)]

ii = 0
jj = 0
for _ in range(r):
	s = input()
	i = ii
	j = jj
	for c in s:
		ai = 0
		aj = 0
		for a in range(zr):
			for b in range(zc):
				#print(i, j, c)
				ans[i][j] = c
				aj += 1
				if aj < zc:
					j += 1
				else: 
				    aj = 0
			ai += 1
			if ai < zr:
				i += 1
				j -= (zc-1)
		j += 1
		i -= (zr-1)
	ii += zr
	jj = 0

for i in range(len(ans)):
	for j in range(len(ans[0])):
		print(ans[i][j], end='')
	print()
	
