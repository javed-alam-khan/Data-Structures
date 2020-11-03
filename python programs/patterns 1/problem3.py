n = int(input())
if(n != 0):
	print("1")
i = 1
while(i <= n-1):
	print('1', end = '')
	j = 1
	while(j <= i-1):
		print('2', end = '')
		j += 1
	print('1')
	i += 1
