# a = 10		# Global Variable
# def f():
# 	b = 20	# Local Variable
# print(a)


# a = 10		# Global Variable
# def f():
# 	b = 20	# Local Variable
# print(b)

# a = 10		# Global Variable
# def f():
# 	b = 20	# Local Variable
# f()
# print(b)


# a = 10		# Global Variable
# def f():
# 	b = 20	# Local Variable
# 	print(a)
# 	print(b)
# f()

# def f():
# 	b = 20
# 	print(b)
# 	print(a)
# a = 30
# f()


# a = 10
# def f():
# 	a = 12
# 	print(a)
# 	print(id(a))
# print(a)
# print(id(a))
# f()
# print(a)
# print(id(a))

# a = 10
# def f():
# 	print(a)
# 	print(id(a))
# print(a)
# print(id(a))
# f()
# print(a)
# print(id(a))

# a = 10
# def f():
# 	global a
# 	a = 12
# 	print(a)
# 	print(id(a))
# print(a)
# print(id(a))
# f()
# print(a)
# print(id(a))


def f():
	b = 10
	return b
r = f()
print(r)