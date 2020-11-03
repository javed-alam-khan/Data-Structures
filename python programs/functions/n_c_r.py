def factorial(n):
	fact = 1
	for i in range(2, n+1):
		fact *= i
	return fact
def nCr(n, r):
	nFact = factorial(n)
	rFact = factorial(r)
	nMinusRFact = factorial(n-r)
	res = nFact//(rFact * nMinusRFact)
	return res
n = int(input())
r = int(input())
print(nCr(n, r))
