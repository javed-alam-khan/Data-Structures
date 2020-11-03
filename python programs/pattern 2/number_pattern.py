n = int(input())
i = 1
while(i <= n):
	j = 1
	while(j <= i):
		print(j, end = "")
		j += 1

	k = 1
	while(k <= 2*n-2*i):
		print(" ", end = "")
		k += 1
	
	j -= 1
	while(j >= 1):
		print(j, end = "")
		j -= 1
	print()
	i += 1
