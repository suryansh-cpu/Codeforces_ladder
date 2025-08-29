a = int(input())
# b = str(input())
b = []
for i in range(a):
    c = int(input())
    b.append(c)
one,two,three = 0,0,0
for i in b:
    if(i>one):
        three = two
        two = one
        one = i
    elif (i<=one and i>two):
        three = two
        two = i
    elif (i<=two and i>=three):
        three = i
print(one,two,three)
