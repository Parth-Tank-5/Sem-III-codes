rollno=[]
numb=int(input("Enter the total number of students: \n "))
print("Enter the Roll Numnbers:\n")
for i in range(numb):
    rollno.append(int(input()))
length=len(rollno)
for i in range(length):
    for j in range(i+1,length):
        if rollno[i]>rollno[j]:
            temp=rollno[i]
            rollno[i]=rollno[j]
            rollno[j]=temp
findd=int(input("Enter the roll number to search:\n"))
def ternary(rollno,findd,left,right):
    if right>=left:
        mid1=int(left+(right-left)/2)
        mid2=int(left+2*(right-left)/2)
        if (rollno[mid1]==findd):
            return mid1
        if rollno[mid2]==findd:
            return mid2

        if findd<rollno[mid1]:
            return(ternary(rollno,findd,left,mid1-1))
        elif findd >rollno[mid2]:
            return(ternary(rollno,findd,mid2+1,right))
        else: return(ternary(rollno,findd,mid1+1,mid2-1))
    return 0
left=0
right=length-1
indexx=ternary(rollno,findd,left,right)
if indexx!=0:
    print("\n\n\nMatch Found!!!")
else:print("\n\nMatch not found!!!")        