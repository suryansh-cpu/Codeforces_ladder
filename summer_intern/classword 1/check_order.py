n = int(input())
a = []
for _ in range(n):
    b = int(input())
    a.append(b)
num = a[0]
for i in range(1,n):
    if(a[i] == num+1):
        num = a[i]
    else:
        print(a[i])
        num+=1
# for i in a:
#     print(i)