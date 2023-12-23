//Write a C++ program to create a class Book which contains data members
//as B–Id, B–Name, B–Author, B– publication. Write member functions
//to accept and display Book information
#include<iostream>
using namespace std;
class book
{
public:
   int b_id;
   char b_name[20],author[20],publication[20];
     void accept()
     {
        cout<<"enter B_ID:"<<endl;
        cin>>b_id;
        cout<<"enter B_NAME:"<<endl;
        cin>>b_name;
        cout<<"enter B_author:"<<endl;
        cin>>author;
        cout<<"enter B_PUBLICATION:"<<endl;
        cin>>publication;
     }
     void disp()
     {
        cout<<"BOOK ID="<<b_id<<endl;
        cout<<"BOOK NAME="<<b_name<<endl;
        cout<<"BOOK AUTHOR="<<author<<endl;
        cout<<"BOOK PUBLICATION="<<publication<<endl;
     }
};
int main()
{
   book ob;
   ob.accept();
   ob.disp();
}



