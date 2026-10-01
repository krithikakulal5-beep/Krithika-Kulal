print("----------ELECRICITY BILL----------")
print("calculate a household's electricity bill ")
duedate=21/7/26
category=input("enter the category : ")
base=100
if category == "1":
    print("Commercial")
    unitsconsumed=int(input("No of units consumed:"))
    if unitsconsumed <=100:
        bill=unitsconsumed*10
    elif unitsconsumed<=300 and unitsconsumed>100 :
        amount=unitsconsumed-base
        bill=(amount*12)+(base*10)
    elif unitsconsumed >300:
        amount1=unitsconsumed-base
        bill=(amount1*15)+base
    print("The bill after unitsconsumed : ",bill)
    peakthreshold=input(" Is peakthreshold found[yes/no]:")
    if peakthreshold  == "yes" :
        penalty_bill=bill+100
    else: 
        penalty_bill=bill
    print(f"The bill after threshold :{penalty_bill}")

else: 
    category =="0"
    print("Non-commercial")
    unitsconsumed=int(input("No of units consumed:"))
    if unitsconsumed <=100:
        bill1=unitsconsumed*5
    elif unitsconsumed <=300 and unitsconsumed>100:
        amount=unitsconsumed-base
        bill1=(amount*6)+(base*10)
    elif unitsconsumed >300:
        amount1=unitsconsumed-base
        bill1=(amount1*8)-base
    print("The bill after unitsconsumed: ",bill1)
    peakthreshold=input(" Is peakthreshold found[yes/no]:")
    if peakthreshold == "yes":
        penalty_bill1=bill1+50
    else:
        penalty_bill1=bill1
    print(f"The bill after threshold :{penalty_bill1}")
       
