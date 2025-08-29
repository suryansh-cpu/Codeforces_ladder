s = str(input())
num = 0
sum = 0
for i in range(0,len(s),1):
    if (s[i]>='a' and s[i]<='z'):
        sum += num
        num = 0
    if (s[i]>='0' and s[i]<='9'):
        num = (num*10) + int(s[i])
    if(s[i]>='A' and s[i]<='Z'):
        sum+=num
        num = 0
        sum += (ord(s[i])-65)
print(sum)