#include<iostream>
#include<string.h>       
using namespace std;
class emp
{
  public:
   int eno;
   char ename[20];
   float sal;
   emp(int eno,char ename[20],float sal)
   {
      this->eno=eno;
      strcpy(this->ename,ename);
      this->sal=sal;
   }
   void disp()
   {
      cout<<"employee no="<<eno<<endl;
      cout<<"employee name="<<ename<<endl;
      cout<<"employee salary="<<sal<<endl;
   }
   
};
int main()
{
   int eno;
   char ename[20];
   float sal;
   cout<<"enter employee number:";
   cin>>eno;
   cout<<"enter employee name:";
   cin>>ename;
   cout<<"enter employee salary:";
   cin>>sal;
   emp ob(eno,ename,sal);
   ob.disp();
}
