mylist=[]
for i in range (5):
    mylist.append(input())

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
print("\n\n\n\n",freq(mylist))