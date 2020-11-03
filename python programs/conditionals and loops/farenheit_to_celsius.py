s = int(input())
e = int(input())
w = int(input())
f = s
while(f <= e):
	c = int((f-32)*(5/9))
	print(f, end='\t')
	print(c)
	f += w