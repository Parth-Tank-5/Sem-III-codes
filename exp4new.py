rollno=[]
numb=int(input("Enter the total number of students\n"))
print("Enter the Rollnumbers\n")
for i in range(numb):
    rollno.append(int(input()))
length=len(rollno)
for i in range(length):
    if rollno[i]>rollno[i+1]:
        temp=rollno[i]
        rollno[i]=rollno[i]
        rollno[i]=temp 