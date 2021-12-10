# Find the Saddle Point

# Assignment A#3

# Write a python program that determine the location of a saddle point of matrix
# if one exists. An m x n matrix is said to have a saddle point if some entry
# a[i][j] is the smallest value in row i and the largest value in j.


def accept_matrix(M,row,column):
    for i in range(row):
        A = []
        for j in range(column):
            A.append(int(input()))
        M.append(A)
    print("\n Matrix accepted successfully")

def display_matrix(M,row,column):
    print("Matrix (%d, %d) : "%(row,column))
    for i in range(row):
        print("\t\t" ,end=" ")
        for j in range(column):
            print("%d"%M[i][j], end=" ")
        print("")

def saddle_point(M,row,column):
    count = 0
    for i in range(row):
        min_row = M[i][0]
        ci = 0
        for j in range(1,column):
            if(min_row>M[i][j]):
                min_row = M[i][j]
                ci=j
        flag = 1
        for ri in range(row):
            if(min_row<M[ri][ci]):
                flag = 0
                break
        if(flag==1):
            count +=1
            print("%d value is minimum in row(%d) and maximum in column(%d)"%(min_row,i+1,ci+1))
    if (count==0):
        print("No saddle Point is found this matrix")
    else:
        print("%d is Saddle Point Found in the given matrix"%count)



def main():
    while True :
        print("1: Accept Matrix\n2: Display Matrix\n3: Find The Saddle Point\n4: Exit")
        ch = int(input("Enter Your Own Choice : "))
        if (ch == 4):
            print("End The Program")
            break
        elif (ch == 1):
            Mat = []
            print("\nEnter the order of the Matrix (row,column) : ")
            row = int(input("Row = "))
            column = int(input("Column = "))
            print("Enter the elements of the Matrix : \n")
            accept_matrix(Mat,row,column)
        elif (ch==2):
            display_matrix(Mat,row,column)
        elif (ch==3):
            display_matrix(Mat,row,column)
            saddle_point(Mat,row,column)
        else:
            print("Wrong choice entered ! Try Again")

main()