#include<iostream>
using namespace std;
class emp
{ 
 public:
   int eno;
   char ename[20];
   float sal;
     emp();
     void disp()
     {
        cout<<"employee number="<<eno<<endl;
        cout<<"employee name="<<ename<<endl;
        cout<<"employee salary="<<sal<<endl;
        
     }
};
emp::emp()
{
   cout<<"enter emp no:";
   cin>>eno;
   cout<<"enter emp name:";
   cin>>ename;
   cout<<"enter emp salary:";
   cin>>sal;
}
int main()
{
  emp ob;
  ob.disp();
}


