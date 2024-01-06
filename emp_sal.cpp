#include<iostream>
using namespace std;
class emp
{
public:
  int eno;
  char ename[30];
  float sal;
  void accept()
  {
      cout<<"enter emp no:";
      cin>>eno;
      cout<<"enter emp name:";
      cin>>ename;
      cout<<"enter emp salary:";
      cin>>sal;
      
  }
  void disp()
  {
     cout<<"employee number="<<eno<<endl;
     cout<<"employee name="<<ename<<endl;
     cout<<"employee salary="<<sal<<endl;
  }
};
int main()
{
   emp ob[100];
   int i,n;
   cout<<"enter limit:";
   cin>>n;
   for(i=0; i<n; i++)
   {
       ob[i].accept();
   }
   cout<<"display employee whose salary >20000"<<endl;
   for(i=0; i<n; i++)
   {
      if(ob[i].sal>20000)
      {
      ob[i].disp();
      }
   }
}
