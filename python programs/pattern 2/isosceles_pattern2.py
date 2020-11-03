n = int(input())
i = 1
while(i <= n):
	j = 1
	while(j <= n-i):
		print(" ", end = "")
		j += 1
	k = 1
	while(k <= i):
		print('*', end = "")
		k += 1
	l = k-2
	while(l >= 1):
		print('*', end = "")
		l -= 1 
	print()
	i += 1 
