roll_no=0
name=''
sub1=0
sub2=0
sub3=0
total=0
avg=0
pct=0
def student_details():
        global sub1,sub2,sub3
        roll_no=int(input("enter the roll number"))
        name=input("enter the name")
        sub1=int(input("enter the sub1 marks"))
        sub2=int(input("enter the sub2 marks"))
        sub3=int(input("enter the sub3 marks"))
        return roll_no,name,sub1,sub2,sub3
def gettotal(sub1,sub2,sub3):
    global total
    total=sub1+sub2+sub3
    print(f"total:{total}")
    return total
def getaverage(total):
    global avg
    avg=(sub1+sub2+sub3)/3
    print(f"average:{avg:.2f}")
    return avg
def getfinalgrade():
    global pct
    pct=(total/300)*100
    if pct>85:
        print("grade:distinction")
    elif pct>avg>70:
        print("grade:firstclass")
    elif pct>60:
        print("grade:pass")
    else:
        print("grade:fail") 
def displaystudentresults():
    print(f"roll number:{roll_no}")
    print(f"name:{name}")
    print(f"total:{total}")
    print(f"average:{avg}")
    print(f"percentage:{pct}")                  
for i in range(1,4):
    print(f"student:{i}")
    a,b,c,d,e=student_details()
    total=gettotal(sub1,sub2,sub3)
    avg=getaverage(total)
    getfinalgrade()
    displaystudentresults()


    
