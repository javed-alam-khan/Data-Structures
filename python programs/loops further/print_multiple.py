# n = int(input("Enter n\n"))
# k = int(input("Enter k\n"))
# for i in range(10, n+1):
# 	if(i%k == 0):
# 		print(i, end = " ")
# print()


n = int(input("Enter n\n"))
k = int(input("Enter k\n"))
for i in range(10, n+1):
	if(i%k == 0):
		start = i
		print(start)
		break
for i in range(start, n+1, k):
	print(i)