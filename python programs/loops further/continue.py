# n = int(input())
# for i in range(1, n+1):
# 	if(i == 10):
# 		continue
# 	print(i, end=' ')
# print()

# n = int(input())
# i = 1
# while(i <= n):
# 	if(i == 10):
# 		i += 1
# 		continue
# 	print(i, end=' ')
# 	i += 1
# print()

n = int(input())
for i in range(1, n+1):
	print(i, end=' ')
	if(i%7 == 0):
		continue
	print(i, end=' ')
print()