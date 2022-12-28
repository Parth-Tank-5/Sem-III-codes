a = True
while a:

    marks_list = []
    new_list =[]

    def absent_present(Total_students):
        
        for students in range(Total_students):
            mark = int(input("Enter mark (enter -999 if absent ) : "))
            marks_list.append(mark)
        present = 0
        for marks in marks_list:
            if marks != -999:
                present +=1
                new_list.append(marks)
        
        return present

    def average( new_list  ):
        avg=0
        for i in new_list:
            avg += (i/present) 
        return avg

    def max_marks(new_list):
        maximum = 0
        for mark in new_list:
            if mark > maximum:
                maximum = mark
        return maximum

    def min_marks(new_list):
        minimum = 100
        for mark in new_list:
            if mark <= minimum:
                minimum = mark
        return minimum


    print("Enter :\n 1 for Average\n 2 for highest and lowest marks\n 3 for number of absent and present students\n 4 to exit")
    choice = int(input())


    if choice == 1:
        
        Total_students = int(input("Enter total number of students : "))
        present = absent_present(Total_students)

        Average = average(new_list)
        print("Average marks of class are ", Average)

    elif choice ==2:
        
        Total_students = int(input("Enter total number of students : "))
        present = absent_present(Total_students)

        maximum = max_marks(new_list)
        minimum = min_marks(new_list)

        print(f"Maximum marks in class are {maximum}. \nMinimum marks in class are {minimum}")

    elif choice ==3:
        
        Total_students = int(input("Enter total number of students : "))
        present = absent_present(Total_students)

        absent = Total_students - present

        print(f"Absent students are {absent }. \nPresent students are {present}.\n")
    
    elif choice==4:
        a=False

    else:
        print("You entered wrong choice ")
        continue



