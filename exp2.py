flag=1
present=0
i=0
while flag==1:
    mark_list=[]
    newlist=[]
    def inputt():
        global i
        i=int(input("Enter the number of students: "))
        print("Enter the scores(-999 if absent): ")
        for n in range (i):
            mark_list.append(input())
        
        for q in mark_list:
            if q !="-999":
                global present
                present +=1
                newlist.append(q)    
        return present
    def avg(marks,i):
        sum=0
        for n in marks:
            sum=sum+int(n)
        print("The average score of the students is: ",sum/i)
    def maxine(marks,i):
        maximum=0
        for n in marks:
            if int(n)>maximum:
                maximum=int(n)
        return maximum
        
    def mini(marks,i):
        minimum=100
        for j in marks:
            if int(j)<minimum:
                minimum=int(j)
        return minimum
        
    def choicee():
        choice=int(input("Enter your choice. \n 1. Find average score. \n 2. Highest & Lowest scores. \n 3. Number of Absent students.\n 4. Display marks with highest frequency. \n 5. Press any other key to exit.\n"))
        return choice
    def freq(marks):
        maxi = 0
        hii = marks[1]
        p=len(marks)
        for o in marks:
            freq2 =marks.count(o)
            if freq2 > maxi:
                maxi = freq2
                hii= o
        return(hii)
            
    k=choicee()
    if k == 1:
        avg(newlist,inputt())
    elif k ==2 :
        i=inputt()
        print("The Highest score of a student is: ",maxine(newlist,i))
        print("The Lowest score of a student is: ",mini(newlist,i))
        
    elif k==3:
        inputt()
        print("Number of students who were absent for the exams is: ",i-present)
    elif k==4:
        print("The score with highest frequency is: ",freq(newlist))
    else:
        flag=0
present=0
mark_list=[]
newlist=[]
k=0