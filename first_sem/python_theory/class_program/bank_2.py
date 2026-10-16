number=int(input("enter the no of acc"))
account_details=[]
for n in range(number):
    emailid=input("enter your email")
    contNo=int(input("enter the contact number"))
    address=input("enter the address")
    balance=int(input("enter the current balance"))

    name=input("enter your name")
    panNo=int(input("enter the pan card number"))
    accNo=int(input("enter the account number"))
    dob=input("enter the date of birth")

    my_list=[emailid,contNo,address,balance]
    my_tuple=(name,panNo,accNo,dob,my_list)
    account_details.append(my_tuple)

print(account_details)
while True:
    print("MENU DRIVEN PROGRAM")
    print("1.Deposit")
    print("2.Withdraw")
    print("3.Show Accounts")
    print("4.Exit")
    choice=int(input("enter the choice"))
    if choice==1:
        account_number=int(input("enter acc number"))
        if account_number==1000 or account_number==2000 or account_number==3000:
            deposit_amount=int(input("enter the deposit amount"))
            print("account found....")
            if account_number==1000:
                idx=0
            elif account_number==2000:
                idx=1
            else:
                idx=2        
            current_balance=account_details[idx][4][3]
            current_balance=current_balance+deposit_amount
            account_details[idx][4][3]=current_balance
            print("current balance=",current_balance)
        else:
                print("account not found")
    elif choice==2:
        account_number=int(input("enter acc number"))
        if account_number==1000 or account_number==2000 or account_number==3000:
            print("account found....")
            withdraw_amount=int(input("enter the withdrawal amount"))
            if account_number==1000:
                idx=0
            elif account_number==2000:
                idx=1
            else:
                idx=2  
            if withdraw_amount<=current_balance:
                current_balance=account_details[idx][4][3]
                current_balance=current_balance-withdraw_amount
                account_details[idx][4][3]=current_balance
                print("current balance=",current_balance)
            else:
                print("insufficiant balance")
        else:
                print("account not found")
    elif choice==3:
        for i in range(len(account_details)):
            name=account_details[i][0]
            acc_num=account_details[i][2]  
            bal=account_details[i][4][3]
            print(f"name\n",name)    
            print(f"account number\n",acc_num)
            print("current balance\n",bal) 
    elif choice==4:
        print("exiting the program") 
        break 
