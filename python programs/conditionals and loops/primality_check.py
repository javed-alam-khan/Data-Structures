n = int(input())
flag = True

i = 2
while (i <= (n/2)):
	if (n%i == 0):
		flag = False
		break
	i += 1

if (flag == True):
	print("Prime")
else:
	print("Not Prime")


