a = [15, 5]
b = [15, 10]

print(a is b)
print(a==b)
b = a
b[0] = 7

print(id(a))
print(id(b))
print(a)