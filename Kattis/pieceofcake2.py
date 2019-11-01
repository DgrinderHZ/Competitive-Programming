n, h, v = map(int, list(input().split()))

nv = n - v
nh = n - h

if nv > v:
	if nh > h:
		print(4*nv*nh)
	else:
		print(4*nv*h)
else:
	if nh > h:
		print(4*v*nh)
	else:
		print(4*v*h)