#write a python script to process three student details and calaulate avg perctage,dispay the grade based on percentage
#above 85 distinction 70-84 firstclass
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
def gettotal():
    global total
    total=sub1+sub2+sub3
    print(f"total:{total}")
def getaverage():
    global avg
    avg=(sub1+sub2+sub3)/3
    print(f"average:{avg:.2f}")
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
for i in range(1,4):
    print(f"student:{i}")
    student_details()
    gettotal()
    getaverage()
    getfinalgrade()


    
