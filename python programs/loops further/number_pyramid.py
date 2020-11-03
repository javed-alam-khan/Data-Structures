n = int(input())
for i in range(1, n+1):
	for j in range(1, i):
		print(' ', end='')
	for k in range(i, n+1):
		print(k, end='')
	print()
for i in range(1, n):
	for j in range(i, n-1):
		print(' ', end='')
	v = n-i
	for k in range(1, i+2):
		print(v, end='')
		v += 1
	print()
