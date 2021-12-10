/************************************************************
 Assignment Number A:-5
Write a C++ program create a calculator for an arithmetic operator (+, -, *, /). The program
 should take two operands from user and performs the operation on those two operands
 depending upon the operator entered by user. Use a switch statement to select the operation.
 Finally, display the result.
 Some sample interaction with the program might look like this:

Enter first number, operator, second number: 10 / 3
Answer = 3.333333
Do another (y/n)? y              
Enter first number, operator, second number: 12 + 100
Answer = 112
Do another (y/n)? n
  
*************************************************************/
#include<iostream>                                          //including header files
using namespace std;             //standard library
int main()                                                  //initializing main function
{
char c;                                                     //variable declearation
float n1,n2;
     cout<<"Enter the operation to be perform\n +\t-\t*\t/\t";//operation to be performed
     cin>>c;
     cout<<"Enter first number:\t";                           //printing first number
     cin>>n1;                                                 //scaning first number
     cout<<"Enter second number:\t";                          //printing second number
     cin>>n2;                                                 //scaning second number
     
     
switch (c)                                                    //using switch case
{
     case'+':cout<<n1+n2<<"\n";
     break;
     case'-':cout<<n1-n2<<"\n";
     break;
     case'*':cout<<n1*n2<<"\n";
     break;
     case'/':cout<<n1/n2<<"\n";
     break;

     default: cout<<"Enter your valid choice";
}
return 0;
}

/******************************************************
OUTPUT:-
gescoe@hadoopslave1:~/Desktop$ g++ assignment1.cpp
gescoe@hadoopslave1:~/Desktop$ ./a.out 
Enter the operation to be perform
 + - * /  
+
Enter first number: 5
Enter second number: 5
10
gescoe@hadoopslave1:~/Desktop/kunal$ ./a.out 
Enter the operation to be perform
 + - * /  
-
Enter first number: 10
Enter second number: 5
5
gescoe@hadoopslave1:~/Desktop/kunal$ ./a.out 
Enter the operation to be perform
 + - * /  
*
Enter first number: 11
Enter second number: 5
55
gescoe@hadoopslave1:~/Desktop/kunal$ ./a.out 
Enter the operation to be perform
 + - * / 
/
Enter first number: 25
Enter second number: 5
5
*******************************************************/