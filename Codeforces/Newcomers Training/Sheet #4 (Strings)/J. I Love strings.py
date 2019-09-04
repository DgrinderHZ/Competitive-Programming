t = int(input())
for _ in range(t):
	s, ss = input().split()
	i = j = 0
	ans = ""
	while i < len(s) and j < len(ss):
		ans += s[i]
		ans += ss[j]
		i += 1
		j += 1
	if i < len(s):
		ans += s[i:]
	elif j < len(ss):
		ans += ss[j:]
	print(ans)
