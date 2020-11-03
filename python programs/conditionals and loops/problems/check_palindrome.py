def reverse(n):
	rev = 0
	while(n):
		rem = n % 10
		rev = rev * 10 + rem
		n //= 10
	return rev

def checkPalindrome(n):
	if(n == reverse(n)):
		return True
	else:
		return False

n = int(input())
print(checkPalindrome(n))
