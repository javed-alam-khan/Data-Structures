# n = int(input())
# inputStr = input()
# li = inputStr.split()
# sum = 0
# for i in li:
# 	sum += int(i)
# print(sum)


# Using File
with open("array_sum_inp.txt", "r") as fin:
	with open("array_sum_op.txt", "w") as fout: 
		linesList = fin.readlines()
		# for i in range(0, len(linesList)-1, 2):
		# 	size = linesList[i]
		# 	print(size, end = "")
		# 	inpStr = linesList[i+1]
		# 	print(inpStr, end = "")
		# print()
		for i in range(0, len(linesList)-1, 2):
			size = linesList[i]
			inpStr = linesList[i+1]
			li = inpStr.split()
			sum = 0
			for i in li:
				sum += int(i)
			fout.write(str(sum) + "\n")
			
