// *
//  Write a C++ program that creates an output file,
//  writes information to it, closes the file and open it again as an input file
//  and read the information from the file.
//  Enter name of file from user
//  */
 #include <cstdlib>
 #include <fstream>
 #include <iostream>
 #include<bits/stdc++.h>
 using namespace std;
 int main ()
 {char name[80];
 cout<<"Enter name of file to create\n";
 cin>>name;
 // open a file in write mode.
 ofstream fout;
 fout.open(name);
 if(!fout)
 {
 cout<<"Error opening file\n";
 exit(1);
 }
 cout << "Writing to the file" << endl;
 cout << "Enter contents for file end with ctrl+D";
 string data;
 while(getline(cin,data))
 {
 if(data == "^D")
 break;
 // write inputted data into the file.
 fout << data << endl;
 }
 // close the opened file.
 fout.close();
 // open a file in read mode.
 ifstream fin;
 fin.open(name);
 if(!fin)
 {
 cout<<"Error opening file\n";
 exit(1);
 }
 cout << "Reading from the file" << endl;
 while(fin)
 {
 getline(fin,data);
 // write the data at the screen.
 cout << data << endl;
 }
 // close the opened file.
 fin.close();
 return 0;
 }