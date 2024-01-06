#include<iostream>
using namespace std;
class emp
{
   public:
   int eno;
   char ename[20];
   float sal;
        void accept()
        {
             cout<<"enter emp no:"<<endl;
             cin>>eno;
             cout<<"enter ename:"<<endl;
             cin>>ename;
             cout<<"enter salary:"<<endl;
             cin>>sal;
        }
        void disp()
        {
          cout<<"emp no="<<eno<<endl;
          cout<<"emp name="<<ename<<endl;
          cout<<"emp salary="<<sal<<endl;
        }
}ob[5];
  int main()
  {
      int i;
      for(i=0; i<5; i++)
      {
          ob[i].accept();
      }
      cout<<"\n display 5 employee information";
      for(i=0; i<5; i++)
      {
         ob[i].disp();
      }
   }
  
