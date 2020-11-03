# def checkArmstrong(n):
# 	c = 0
# 	copy = n
# 	while(copy):
# 		c += 1
# 		copy = copy//10
# 	sum = 0
# 	copy = n
# 	while(copy):
# 		sum += pow(copy % 10, c)
# 		copy //= 10
# 	if(sum == n):
# 		return True
# 	else:
# 		return False
# n = int(input())
# if(checkArmstrong(n)):
# 	print("true")
# else:
# 	print("false")

def checkArmstrong(n):
	c = 0
	copy = n
	while(copy):
		c += 1
		copy = copy//10
	sum = 0
	copy = n
	while(copy):
		sum += pow(copy % 10, c)
		copy //= 10
	if(sum == n):
		return True
	else:
		return False
with open("arms_input.txt", "r") as fin:
	with open("arms_output.txt", "a") as fout:
		fout.truncate(0)
		for line in fin:
			if(checkArmstrong(int(line))):
				fout.write("true\n")
			else:
				fout.write("false\n")