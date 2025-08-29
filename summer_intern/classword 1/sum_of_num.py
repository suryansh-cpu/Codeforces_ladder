# s = "ABCdJ2398Dd92"
# a = len(s)
# c=[]
# for x in range(a-1):
#     if s[x]>='0' and s[x]<='9':
#         y = x+1
#         while (s[y]>='0' or s[y]<='9') and y<a-1:
#             y+=1
#         new = s.
#         c.append()
        
s = str(input())
num = 0
sum = 0
for i in range(len(s)):
    if (s[i]>='0' and s[i]<='9'):
        num = (num*10) + int(s[i])
    else: 
        sum += num
        num = 0
print(sum)