#bank operation
#tuple name,panno,accno=1000,dob
#list emailid,contno,address-placename,currentbalnce
bankdetails=()
name=input("enter your name")
panNo=int(input("enter the pan card number"))
accNo=int(input("enter the account number"))
dob=input("enter the date of birth")
bankdetails=(name,panNo,accNo,dob)

accountdetails=[]
emailid=input("enter your email")
contNo=int(input("enter the contact number"))
address=input("enter the address")
currentbalance=int(input("enter the current balance"))
accountdetails.append(emailid)
accountdetails.append(contNo)
accountdetails.append(address)
accountdetails.append(currentbalance)


#bankdetails=(accountdetails)

print(accountdetails)
