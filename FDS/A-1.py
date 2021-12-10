def accept_marks(A):
    n= int(input("enter the total no of the students :"))
    for i in range(n):
        while True:
            x=input("enter the marks scored in FDS for student %d:"%(i+1))
            if(x=="AB"):
                x =-1 
                break
            x=int(x)
            if (x>=0 and x<=30):
                break
            else:
                print("plzz enter valid marks out off 30")
        A.append(x)        
    print("marks accepted & stored successfully");


def display_marks(A):
    print("\n Marks scored in FDS")
    for i in range(len(A)):
        if (A[i]==-1):
            print("\t student %d :AB"%(i+1))
        else:
            print("\t student %d : %d"%(i+1,A[1])) 


def find_average_score_of_class(A):
    sum =0
    for i in range(len(A)):
        if (A[i]!=-1):
            sum=sum+A[i]
    avg=sum/len(A)        
    display_marks(A)
    print('\nAverage score of the class is %.2f\n\n'%avg)


def find_highest_and_lowest_score_of_the_class(A):
    max=0
    min =31
    for i in range(len(A)):
        if (max<A[i]):
            max =A[i]   
            max_ind =i
        if (min > A[i] and A[i]!= -1):     
            min = A[i]
            min_ind =i
    display_marks(A)        
    print("highest marks score of score is %d scored by student %d"%(max,max_ind+1))
    print("lowest marks score of score is %d scored by student %d"%(min,min_ind+1))


def find_count_of_absent_student(A):
    count =0
    for i in range(len(A)):
        if (A[i]==-1):
            count +=-1
        display_marks(A)    
        print("\t absent student count =%d"%count)


def display_mark_with_highest_frequency(A):
    freq=0
    for i in range(len(A)):
        count =0
        if (A[i] != -1):
            for j in range (len(A)):
                if (A[i]==A[j]):
                    count +=1
        if(count>freq):
            marks=A[i]            
            freq =count
    display_marks(A)        
    print("\n marks with highest frequency is :%d (%d)"%(marks,freq))


def main():
    FDS_marks =[]
    while True :
        print("\t\t1 : Accept FDS marks")
        print("\t\t2 : Average score of class")
        print("\t\t3 : Highest score and lowest score of the class")
        print("\t\t4 : Count of the students who were absent in the class")
        print("\t\t5 : Display marks with highest frequency")
        print("\t\t6 : exit")
        ch=int (input("enter your choice: "))
        if (ch==6):
            print("end of the process")
            quit()
        elif (ch==1):
            accept_marks(FDS_marks)    
            display_marks(FDS_marks)    
        elif(ch==2):
            find_average_score_of_class(FDS_marks)        
        elif(ch==3):
            find_highest_and_lowest_score_of_the_class(FDS_marks)    
        elif(ch==4):
            find_count_of_absent_student(FDS_marks)
        elif(ch==5):
            display_mark_with_highest_frequency(FDS_marks)            
        else:
            print("wrong choice entered !!(choice should be between 1to 6) Try again")

main()  
