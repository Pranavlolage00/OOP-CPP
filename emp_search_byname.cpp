#include<iostream>
#include<string.h>
using namespace std;
class emp
{
  public:
   int eno;
   char ename[20];
   float sal;
      void accept()
      {
         cout<<"\nenter employee number:";
         cin>>eno;
         cout<<"\nenter employee name:";
         cin>>ename;
         cout<<"\nenter employee salary:";
         cin>>sal;
      }
      void disp()
      {
         cout<<"emp id="<<eno<<endl;
         cout<<"emp name="<<ename<<endl;
         cout<<"emp salary="<<sal<<endl;
      }
};
int main()
{
    int i,n;
    char name[30];
    emp ob[100];
    cout<<"enter limit:";
    cin>>n;
    for(i=0; i<n; i++)
    {
       ob[i].accept();
    }
   cout<<"enter emp name to search:";
   cin>>name;
   for(i=0; i<n; i++)
   {
      if(strcmp(ob[i].ename,name)==0)
      {
         ob[i].disp();
         break;
      }
   }
   if(i==n)
     cout<<"record is not found:";
}

