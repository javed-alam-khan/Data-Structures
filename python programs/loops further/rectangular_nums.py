n = int(input())
for i in range(n-1):
	for j in range(i+1):
		print(n-j, end='')
	for k in range(2*n-2*i-3):
		print(n-i, end='')
	v = n-i
	for l in range(i+1):
		print(v, end='')
		v += 1
	print()
for i in range(n):
	for j in range(n-i-1):
		print(n-j, end='')
	for k in range(2*i+1):
		print(i+1, end='')
	v = i+2
	for l in range(n-i-1):
		print(v, end='')
		v += 1
	print()