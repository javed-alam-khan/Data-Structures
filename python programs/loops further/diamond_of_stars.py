n = int(input())
n1 = (n//2) + 1
for i in range(1, n1+1):
	for j in range(1, n1-i+1):
		print(" ", end = "")
	for k in range(1, i+1):
		print('*', end = "")
	for l in range(k-1, 0, -1):
		print('*', end = "")
	print()

n2 = n//2
for i in range(1, n2+1):
	for m1 in range(1, i+1):
		print(' ', end = "")
	for m2 in range(1, n2-i+2):
		print("*", end = "")
	for m3 in range(m2-1, 0, -1):
		print('*', end = "")
	print()
