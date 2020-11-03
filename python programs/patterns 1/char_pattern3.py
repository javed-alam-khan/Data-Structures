n = int(input())
i = 1
while(i <= n):
	startChar= chr(ord('A') + i - 1)
	j = 1
	while(j <= i):
		print(chr(ord(startChar) + j - 1), end = '')
		j += 1
	print()
	i += 1
