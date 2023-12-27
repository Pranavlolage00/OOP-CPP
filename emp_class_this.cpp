#include<iostream>
#include<string.h>
using namespace std;
class emp
{
    public:
   int eno;
   char ename[20];
   float sal;
   void accept(int eno,char ename[20],float sal)
   {
       this->eno=eno;
       this->sal=sal;
       strcpy(this->ename,ename);
   }
   void disp()
   {
       cout<<"\nemp id="<<eno;
       cout<<"\n emp name="<<ename;
       cout<<"\n emp salary="<<sal;
   }
}ob;
int main()
{
    ob.accept(101,"om",15000);
    ob.disp();
}
