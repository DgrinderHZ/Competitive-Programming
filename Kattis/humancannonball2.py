# https://open.kattis.com/problems/humancannonball2
# Physics 

import math
n = int(input())

for _ in range(n):
	v, o, x, h, hh = map(float, input().split())
	o = o * math.pi / 180.0;
	t = x/(v*math.cos(o))
	y = v*t*math.sin(o)-9.81*t*t/2

	if y > h+1 and y < hh-1:
		print("Safe")
	else:
		print("Not Safe")
