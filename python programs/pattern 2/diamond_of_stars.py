n = int(input())
i = 1
n1 = (n/2) + 1
while(i <= n1):
	j = 1
	while(j <= n1-i):
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

i = 1
n2 = n/2
while(i <= n2):
	m1 = 1
	while(m1 <= i):
		print(' ', end = "")
		m1 += 1
	m2 = 1
	while(m2 <= n2-i+1):
		print("*", end = "")
		m2 += 1
	m3 = m2-2
	while(m3 >= 1):
		print('*', end = "")
		m3 -= 1
	print()
	i += 1 
