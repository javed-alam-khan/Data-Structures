def isPrime(n):
	if(n==0 or n==1):
		return False
	for i in range(2, (n//2)+1):
		if(n%i == 0):
			return False
	return True
n = int(input())
for i in range(2, n+1):
	if(isPrime(i)):
		print(i, end=' ')
print() 