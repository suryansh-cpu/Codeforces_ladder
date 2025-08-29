s = str(input())
freq = {0:0,1:0,2:0,3:0,4:0,5:0,6:0,7:0,8:0,9:0}
for i in s:
    freq[int(i)]+=1
for i in freq:
    if(freq[i]==0):continue
    elif(i != freq[i]):print(i)