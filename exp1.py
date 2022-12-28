se_comp=[]
grp_A=[]
grp_B=[]
grp_C=[]
a=[]
b=[]
c=[]
d=[]
n=int(input('Enter no. of students '))
for i in range(0,n):
    ele=input("student name: ")
    se_comp.append(ele)
print('The list of %i students : \n '%n,(se_comp))
n=int(input("enter no. of students playing cricket: "))
for i in range(0,n):
    ele=input('student name: ')
    grp_A.append(ele)
n=int(input('Enter no. of students playing badminton: '))
for i in range(0,n):
    ele=input('student name: ')
    grp_B.append(ele)
n=int(input("enter no. of students playing football: "))
for i in range(0,n):
    ele=input('student name: ')
    grp_C.append(ele)

def task1():
    for i in se_comp:
        if i in grp_A and i in grp_B:
            a.append(i)
    print("List of student who play cricket & badminton:: ",a)

def task2():
    for i in se_comp:
        if (i in grp_A and i not in grp_B):
            b.append(i)
        if (i in grp_B and i not in grp_A):
            b.append(i)
    print("List of students who play either cricket or badminton:: ",b)

def task3():
    for i in se_comp:
        if i not in grp_A and i not in grp_B:
            c.append(i)

def task4():
    for i in se_comp:
        if i in grp_A and i in grp_C and i not in grp_B:
            d.append(i)

print("1.List of student who play cricket & badminton ")
print("2.List of students who play either cricket or badminton ")
print("3.No. of students playing neither cricket nor badminton ")
print("4.No. of students playing cricket & football but not badminton ")
flag='1'
while flag=='1':
    ch=int(input('Enter your choice::'))
    if ch==1:
        task1()
        flag=(input('press 1 to continue and any other key to exit '))
    elif ch==2:
        task2()
        flag=(input('press 1 to continue and any other key to exit '))
    elif ch==3:
        task3()
        print("No. of students playing neither cricket nor badminton ::",c,len(c))
        flag=(input('press 1 to continue and any other key to exit '))
    elif ch==4:
        task4()
        print("No. of students playing cricket & football but not badminton ::",d,len(d))
        flag=(input('press 1 to continue and any other key to exit '))
    else :
        flag=(input('Invalid choice. Press 1 to continue and any other key to exit.'))