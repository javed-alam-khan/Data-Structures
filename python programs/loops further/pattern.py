n = int(input())
for i in range(1, n+1):
	for j in range(1, n-i+1):
		print(' ',end='')
	v = i
	for k in range(1, i+1):
		print(v, end='')
		v += 1
	v -= 2
	for k in range(1, i):
		print(v, end='')
		v -= 1
	print()