n = int(input())
i = 2
while(i <= n):
	flag = True
	j = 2
	while (j <= (i/2)):
		if (i%j == 0):
			flag = False
			break
		j += 1

	if (flag == True):
		print(i, end = " ")
	i += 1
print()


