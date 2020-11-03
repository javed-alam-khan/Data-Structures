# def printTable(start, end, step):
# 	while(start <= end):
# 		cels = int((start-32)*(5/9))
# 		print(start, end="\t")
# 		print(cels)
# 		start += step

# start = int(input())
# end = int(input())
# step = int(input())
# printTable(start, end, step)


# using files
def printTable(start, end, step):
	with open("far_cels_op.txt", "w") as fOp:
		while(start <= end):
			cels = int((start-32)*(5/9))
			strValue = str(start) + "\t" + str(cels) + "\n";
			fOp.write(strValue);
			start += step
with open("far_cels_inp.txt", "r") as fInp:
	start = int(fInp.readline().strip())
	end = int(fInp.readline().strip())
	step = int(fInp.readline().strip())
	printTable(start, end, step)
