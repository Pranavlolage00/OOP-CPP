#include<iostream>
using namespace std;
class emp
{
   public:
   int eno;
   char ename[20];
   float sal;
    emp()
    {
       cout<<"enter emp no:";
       cin>>eno;
       cout<<"enter emp name:";
       cin>>ename;
       cout<<"enter emp sal:";
       cin>>sal;
    }
    void disp()
    {
       cout<<"employee eno="<<eno<<endl;
       cout<<"employee ename="<<ename<<endl;
       cout<<"employee salary="<<sal<<endl;
    }
};
int main()
{
   emp ob;
   ob.disp();
}

