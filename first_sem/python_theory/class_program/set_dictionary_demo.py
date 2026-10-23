#employeename,employeenumber,companyname,salary store inside set and dictionary
empname=input("Enter the employee name:")
empnumber=int(input("Enter the employee number:"))
companyname=input("Enter the company name:")
salary=int(input("Enter the salary:"))
email=input("enter the email")
employee_set={empname,empnumber,companyname,salary}
employee_set.add(email)
employee_dict={
    "Name":empname,
    "Employee Number":empnumber,
    "Company Name":companyname,
    "Salary":salary}
employee_dict["email"]=email
print("\n Employee Details Using set:")
print(f"employee name\tempnumber\tcompanyname\tsalary\temail")
for i in employee_set:
    print("")
    
print("\nEmployee Details Using Dictionary")
print(employee_dict)