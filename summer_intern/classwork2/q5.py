print("attendence percentage:")
attendence = int(input())
print("did u complete bonus assignment?")
bonus = str(input())
print("marks in python midterm : ")
python = int(input())
if(attendence >= 75 and (bonus == "YES" or python >= 90)):
    print("ENtry given")
else:
    print("entry restricted")