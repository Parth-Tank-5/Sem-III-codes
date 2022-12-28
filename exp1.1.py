def GetCB(a,b):
    K=[]
    for i in a:
        if i in b:
            K.append(i)
    return K
            
def GetCBE(a,b):
    K=[]
    for i in a:
        if i not in b:
            K.append(i)
    for i in b:
        if i not in a:
            K.append(i)
    return K

def GetCBN(a,b,c):
    K=[]
    for i in c:
        if ((i not in b) and (i not in b)):
            K.append(i)
    return len(K)

def GetCBF(a,b,c):
    K=[]
    for i in a:
        if ((i in b) and (i not in c)):
            K.append(i)
    return len(K)



SECOMP =[]
n=int(input("enter the number of student in class\n"))
for i in range(n):
    temp=input('entre name of student\n')
    SECOMP.append(temp)
print("name of student in second year class",SECOMP)



crick=[]
n=int(input("Enter the number of student plays cricket"))
for i in range(n):
    temp=input('entre name of student\n')
    crick.append(temp)
print("name of student in playing cricket are",crick)

BDM=[]
n=int(input("Enter the number of student plays badminton"))
for i in range(n):
    temp=input('entre name of student\n')
    BDM.append(temp)
print("name of student in playing badminton",BDM)

Footb=[]
n=int(input("Enter the number of student plays football"))
for i in range(n):
    temp=input('entre name of student\n')
    Footb.append(temp)
print("name of student in playing football are",Footb)

flag=1
while flag ==1:
    chs=int(input('for getinng student playing both badminton and cricket enter 1\nfor getinng student playing either cricket or badminton but not both enter 2\nfor getinng no. student neither playing cricket nor badminton enter 3\nfor getinng no. student playing  cricket and football but not badminton enter 4\n'))
    if chs ==1:
        print("List of student playing both badminton and cricket are",GetCB(crick,BDM))
    elif chs ==2:
        print("List of student either playing badminton or cricket are",GetCBE(crick,BDM))
    elif chs ==3:
        print("No. of student neither playing badminton cricket are",GetCBN(crick,BDM,SECOMP))
    elif chs ==4:
        print("No. of student playing both cicket and football but not badminton are",GetCBF(crick,Footb,BDM))
    else:
        print("Wrong Choice")
    
    A=input("say Yes for continuation with program and No to Exit the Program ")
    if A=="Yes":
        flag=1
    else:
        flag=0
