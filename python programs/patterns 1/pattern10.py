n = int(input())
i = 1
while(i <= n):
	j = 1
	v = i
	while(j <= i):
		print(v, end = '')
		v = v - 1
		j += 1
	print()
	i += 1
