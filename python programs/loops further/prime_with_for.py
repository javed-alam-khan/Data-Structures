n = int(input())
flag = True
if(n == 1):
    flag = False
for i in range(2, (n//2) + 1):
	if(n % i == 0):
		flag = False
		break
if(flag == False):
	print('not prime')
else:
    print('prime')