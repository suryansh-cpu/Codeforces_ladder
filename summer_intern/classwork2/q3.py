print("do you have a gpu?")
gpu = str(input())
if(gpu == "NO"):
    print("do you have 80 above marks in data structures?")
    marks = str(input())
    if(marks == "YES"):
        print("entry given")
    else :
        print("entry restricted")
else:
    print("entry given")