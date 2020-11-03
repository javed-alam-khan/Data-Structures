import math
n = int(input())
n1 = math.ceil(n/2)
for i in range(n1):
	v1 = n * (2 * i) + 1
	v2 = v1
	for j in range(n):
		print(v1, end=' ')
		v1 += 1
	print()
if(n%2 != 0):
	v2 = v2 - n
else:
	v2 = v2 + n
n2 = n//2 
for i in range(n2):
	v3 = v2
	for j in range(n):
		print(v3, end=' ')
		v3 += 1
	print()
	v2 = v2-(2*n) 
