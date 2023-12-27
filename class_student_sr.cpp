#include<iostream>
#include<string.h>
using namespace std;
class student
{
   public:
   int rno;
   char sname[20];
   float per;
   void accept(int rno,char sname[20],float per);
   void disp();
}ob;
void student::accept(int rno,char sname[20],float per)
{
   this->rno=rno;
   this->per=per;
   strcpy(this->sname,sname);
}
void student::disp()
{
 cout<<"\nstudent rno="<<rno;
 cout<<"\n student sname="<<sname;
 cout<<"\n student percentage="<<per;
}
int main()
{
  ob.accept(101,"om",45.22f);
  ob.disp();
}
