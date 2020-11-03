n = int(input())
i = 1
while(i <= n):
	v = chr(ord('A') + i - 1)
	j = 1
	while(j <= i):
		print(v, end = '')
		j += 1
	print()
	i += 1
