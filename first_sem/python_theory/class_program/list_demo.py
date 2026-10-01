marks=['sachin',90,70,88,66,80]   #declares an list'marks' to store marks of sachin 
my_marks=[]
#dynamic intialisation
for number in range(5):
    newMark=int(input("enter the marks:"))
    my_marks.append(newMark)
print("list elements are:")
for i in range(len(my_marks)):
    print("marks are:",my_marks[i])