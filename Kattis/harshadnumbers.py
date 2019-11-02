n = int(input())

ans = n
while True:
	s = str(ans)
	sm = 0
	for i in s:
		sm += int(i)
	if ans % sm == 0:
		break;
	ans += 1
print(ans)
