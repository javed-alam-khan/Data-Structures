n = int(input())
for i in range(2, (n//2) + 1):
	if(n % i == 0):
		break
else:
	if(n == 1):
		print('not prime')
	else:
		print('prime')
