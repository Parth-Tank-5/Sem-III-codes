og_list=[]
length=int(input("Enter the number of elements you want to append.\n"))
for i in range(length):
    og_list.append(float(input("Enter the element: ")))
#Bubble Sort
def bub_sort():
    bub_list=og_list
    for i in range(length):
        for j in range(0,length-1):
            if bub_list[j]>=bub_list[j+1]:
                temp=bub_list[j]
                bub_list[j]=bub_list[j+1]
                bub_list[j+1]=temp
    print("\nBy Bubble Sort:\n\t",bub_list)
#Selection Sort
def selec_sort():
    selec_list=og_list
    for i in range (length):
        for j in range(i,length-1):
            if selec_list[i]>=selec_list[j]:
                temp=selec_list[j]
                selec_list[j]=selec_list[i]
                selec_list[i]=temp
    print("\nBy Selection Sort:\n\t",selec_list)
    print("\nTop 5 marks are:\n\t",selec_list[-5::],"\n\n")
bub_sort()
selec_sort()
