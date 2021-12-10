/***********************************************************************************************
ASSIGNMENT NO:A-4
TITLE   : Develop an object oriented program in C++ to create a database 
of student information  system containing the following information: 
Name, Roll number, Class, division, Date of Birth, Blood group, 
Contact address, telephone number, driving license no. etc 
Construct the database with suitable member functions for initializing and
 destroying the data viz  constructor, default constructor, Copy constructor,
 destructor, static member functions, friend class, this pointer, inline code 
and dynamic memory allocation operators-new and delete.

*********************************************************************/
using namespace std;
#include<iostream>
#include<string.h>   //for handling string eg.strcpy()
#include<ctime>   //current date and time of system

 class person
{
 
 private:
  char *name,*blood,*address; //declared data variable
  int dob;
  long int insurance,tel,license;
  float height,weight;
  static int count;        //static variables
 public:
 person() //default & dynamic constructor
{
 count++;
 cout<<"-----------------default information------------";
 name=new char[13]; //allocate dynamic memory using new operator
 strcpy(name,"default name");
 blood=new char[3];
 strcpy(blood,"O+");
 address=new char[20];
 strcpy(address,"Nasik");
 insurance=542451;
 tel=+45876112;
 license=19122013;
 height=5.5;
 weight=100;
 dob=1998;
 display();

}
 person(char n[],char b[],int yy,char add[],float w,
 long int in,long int tn,long int ln,float h)  //parameterized constructor
{
                                               
 count++;
  int len;
 len=strlen(n);
 name=new char[len+1];
 strcpy(name,n);

 len=strlen(b);
 blood=new char[len+1];
 strcpy(blood,b);

 len=strlen(add);
 address=new char[len+1];
 strcpy(address,add);
 dob=yy;
 insurance=in;
 tel=tn;
 license=ln;
 height=h;
 weight=w;
}
  void display();     //display function declaration
  
 
static int displaycount()  //static member function
{
 cout<<"\n NUMBER OF ENTRIES ARE:"<<count<<endl;
}

 ~person()         //destructor having same name like construct
{
 cout<<"\n destructor called...";
}
};
 
  int person::count=0;
         void person::display()  //display function definition
{
 cout<<"\n PERSON NAME:"<<name;
 cout<<"\n BLOOD GROUP:"<<blood;
 cout<<"\n DATE OF BIRTH:"<<dob;
 cout<<"\n CONTACT ADDRESS:"<<address;
 cout<<"\n INSURANCE NUMBER:"<<insurance;
 cout<<"\n TELEPHONE NUMBER:"<<tel;
 cout<<"\n LICENSE NUMBER:"<<license;
 cout<<"\n HEIGHT:"<<height;
 cout<<"\n WEIGHT:"<<weight<<endl;
}
  int main()//initializing main function
{
  int ch; //variable declaration
 person *p[20],*temp;
 
  char pname[15],pblood[5],paddress[20];
  long int pinsurance,ptel,plicense;
  float pheight,pweight;
  int cnt=0,dd;
 do
{
 cout<<"\n --------MENU--------"<<endl;
 cout<<"\n 1.DEFAULT CONSTRUCTER ";
 cout<<"\n 2.PARAMETERIZED CONSTRUCTOR"; 
 cout<<"\n 3.NUMBER OF ENTRIES";
 cout<<"\n 4.DISPLAY";
        cout<<"\n 5.EXIT";
 cout<<"\n ENTER THE CHOICE:";
 cin>>ch;
 switch(ch)
{
 case 1:  //DEFAULT CONSTRUCTER INFORMATION
 p[cnt]=new person();
 
 cnt=cnt+1;
 break;
 case 2:  //PARAMETERIZED CONSTRUCTOR INFORMATION
 cout<<"\n ENTER THE PERSON NAME:";
 cin>>pname;
 cout<<"\n ENTER THE PERSON BLOOD GROUP:";
 cin>>pblood;
 cout<<"\n ENTER DATE OF BIRTH:";
 cin>>dd;
 cout<<"\n ENTER THE PERSON CONTACT ADDRESS:";
 cin>>paddress;
 cout<<"\n ENTER THE PERSON INSURANCE NUMBER:";
 cin>>pinsuranc
 cout<<"\n ENTER THE PERSON TELEPHONE NUMBER:";
 cin>>ptel;
 cout<<"\n ENTER THE PERSON LICENSE NUMBER:";
 cin>>plicense;
 cout<<"\n ENTER THE PERSON HEIGHT:";
 cin>>pheight;
 cout<<"\n ENTER THE PERSON WEIGHT:";
 cin>>pweight;
 p[cnt]=new person(pname,pblood,dd,paddress,pinsurance,ptel,plicense,pheight,pweight);
 
 cnt=cnt+1;
 break;

 case 3:  //NUMBER OF ENTRIES INFORMATION
 person::displaycount();
 break;
 
    
 
 case 4: 
 for(int i=0;i<cnt;i++)
{
 p[i]->display();
 }
 break; 
 case 5: 
          return 0;
}
} while(ch!=4);
}

/**************************************************************
OUTPUT:-
gescoe@hadoopmaster:~/Desktop$ g++ Assignment6.cpp
gescoe@hadoopmaster:~/Desktop$ ./a.out

 ---------------------------MENU--------------------------

 1.DEFAULT CONSTRUCTER 
 2.PARAMETERIZED CONSTRUCTOR
 3.NUMBER OF ENTRIES
 4.DISPLAY
 5.EXIT
 ENTER THE CHOICE:1
-----------------default information------------
 PERSON NAME:default name
 BLOOD GROUP:O+
 DATE OF BIRTH:1998
 CONTACT ADDRESS:Nasik
 INSURANCE NUMBER:542451
 TELEPHONE NUMBER:45876112
 LICENSE NUMBER:19122013
 HEIGHT:5.5
 WEIGHT:100

 ---------------------------MENU--------------------------

  1.DEFAULT CONSTRUCTER 
 2.PARAMETERIZED CONSTRUCTOR
 3.NUMBER OF ENTRIES
 4.DISPLAY
 5.EXIT
 ENTER THE CHOICE:2

 ENTER THE PERSON NAME:KUNAL

 ENTER THE PERSON BLOOD GROUP:O+

 ENTER DATE OF BIRTH:1996

 ENTER THE PERSON CONTACT ADDRESS:Dhule

 ENTER THE PERSON INSURANCE NUMBER:4785669

 ENTER THE PERSON TELEPHONE NUMBER:+613994152

 ENTER THE PERSON LICENSE NUMBER:181162013

 ENTER THE PERSON HEIGHT:5.8

 ENTER THE PERSON WEIGHT:75

 ---------------------------MENU--------------------------

  1.DEFAULT CONSTRUCTER 
 2.PARAMETERIZED CONSTRUCTOR
 3.NUMBER OF ENTRIES
 4.DISPLAY
 5.EXIT
 ENTER THE CHOICE:3

 NUMBER OF ENTRIES ARE:2

 ---------------------------MENU--------------------------

  1.DEFAULT CONSTRUCTER 
 2.PARAMETERIZED CONSTRUCTOR
 3.NUMBER OF ENTRIES
 4.DISPLAY
 5.EXIT
 ENTER THE CHOICE:4


 PERSON NAME:KUNAL
 BLOOD GROUP:O+
 DATE OF BIRTH:1996
 CONTACT ADDRESS:Dhule
 INSURANCE NUMBER:613994152
 TELEPHONE NUMBER:181162013
 LICENSE NUMBER:5
 HEIGHT:75
 WEIGHT:4.78567e+06

 ---------------------------MENU--------------------------

  1.DEFAULT CONSTRUCTER 
 2.PARAMETERIZED CONSTRUCTOR
 3.NUMBER OF ENTRIES
 4.DISPLAY
 5.EXIT
 ENTER THE CHOICE:5


**************************************************************/