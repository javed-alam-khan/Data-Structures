n = int(input())
i = 1
k = 1
while(i <= n):
	j = 1
	while(j <= i):
		print(k, end = '')
		k = k + 1
		j += 1
	print()
	i += 1
