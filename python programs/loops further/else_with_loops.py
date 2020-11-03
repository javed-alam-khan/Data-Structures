# i = 1
# while(i <= 5):
# 	if(i == 4):
# 		print()
# 		break
# 	print(i, end=' ')
# 	i += 1
# else:
# 	print('\nloop exhausted')

for i in range(1, 6):
	if(i == 4):
		print()
		break
	print(i, end=' ')
else:
	print('\nloop exhausted')