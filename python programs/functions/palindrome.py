# def reverse(n):
# 	rev = 0
# 	while(n):
# 		rem = n % 10
# 		rev = rev * 10 + rem
# 		n //= 10
# 	return rev
# def palindrome(n):
# 	if(n == reverse(n)):
# 		return True
# 	else:
# 		return False
# n = int(input())
# print(palindrome(n))


def reverse(n):
	rev = 0
	while(n):
		rem = n % 10
		rev = rev * 10 + rem
		n //= 10
	return rev
def palindrome(n):
	if(n == reverse(n)):
		return True
	else:
		return False
with open("palind_inp.txt", "r") as fin:
	with open("palind_op.txt", "a") as fop:
		fop.truncate(0)
		for i in fin:
			r = palindrome(int(i))
			fop.write(str(r) + "\n")
