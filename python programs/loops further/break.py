n = int(input('input '))
for i in range(1, 20):
	for j in range(1, n+1):
		if(j == 6):
			break
		print(j, end=' ')
	print(j, end='\t')