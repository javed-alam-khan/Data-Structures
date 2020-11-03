n = int(input())
evenSum = 0
oddSum = 0
while(n):
	d = n%10
	if(d%2 == 0):
		evenSum += d
	else:
		oddSum += d
	n = n//10
print(evenSum, end=" ")
print(oddSum)