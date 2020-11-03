# def fibonacci(n):
# 	if(n==0):
# 		return 0
# 	elif(n==1):
# 		return 1
# 	else:
# 		return fibonacci(n-1) + fibonacci(n-2)

# def checkMember(n):
# 	for i in range(n+2):
# 		if(fibonacci(i) == n):
# 			return True
# 		elif(fibonacci(i) > n):
# 			return False
# n = int(input())
# print(checkMember(n))


# using files
def fibonacci(n):
	if(n == 0):
		return 0
	elif(n == 1):
		return 1
	else:
		return fibonacci(n-1) + fibonacci(n-2)

def checkMember(n):
	for i in range(n + 2):
		if (fibonacci(i) == n):
			return True
		elif (fibonacci(i) > n):
			return False

with open("fibo_inp.txt", "r") as fInp:
	with open("fibo_op.txt", "a") as fOp:
		fOp.truncate(0)
		for i in fInp:
			n = int(i.strip())
			if(checkMember(n)):
					fOp.write("True\n")
			else:
					fOp.write("False\n")

