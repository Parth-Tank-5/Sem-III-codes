import numpy as np
flag= True
while flag:
    def choicee():
        choice=int(input("enter your choice: \n 1. addition of     matrices.\n 2. Subtraction of matrices \n 3. Multiplication of Matrices. \n 4. Transpose of matrix. \n "))
        return choice

    matrix1=[]
    matrix2=[]
    def inp1():
        R1 = int(input("Enter the number of rows:"))
        C1 = int(input("Enter the number of columns:"))
        print("Enter the entries rowwise:")
     
        for i in range(R1):          
            a =[]
            for j in range(C1):      
                a.append(int(input()))
            matrix1.append(a)
        R2 = int(input("Enter the number of rows:"))
        C2 = int(input("Enter the number of columns:"))
        print("Enter the entries rowwise:")
  

        for i in range(R2):          
            a =[]
            for j in range(C2):      
                a.append(int(input()))
    
            matrix2.append(a)
    def addd(matrix1,matrix2):
        add_matrix=np.add(matrix1,matrix2)
        print("The addition is: \n",add_matrix)
    def sub(matrix1,matrix2):
        sub_matrix=[]
        sub_matric=np.subtract(matrix1,matrix2)
        print("The subtraction is: \n",sub_matrix)
    def mult(matrix1,matrix2):
        mul_matrix=[]
        mul_matrix=np.dot(matrix1,matrix2)
        print("The Multiplication is: \n",mul_matrix )  
    def transp(matrix1):
        trans1=np.matrix(matrix1)
        matrixtt=trans1.transpose()
        print("The Transpose of matrix is: \n",matrixtt)

    
    choice1=choicee()
    if choice1 == 1:
        inp1()
        addd(matrix1,matrix2)
    elif choice1==2:
        inp1()
        sub(matrix1,matrix2)
    elif choice1==3:
        inp1()
        mult(matrix1,matrix2)
    elif choice1==4:
        inp1()
        transp(matrix1)
    else :
        flag =False
