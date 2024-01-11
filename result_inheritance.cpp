#include<iostream>
using namespace std;
class student
{
   public:
    int sno;
    char sname[20],add[60];
    float per,s;
      void accepts()
      {
         cout<<"enter student number:"<<endl;
         cin>>sno;
         cout<<"enter student name:"<<endl;
         cin>>sname;
         cout<<"enter adress:";
         cin>>add;
      }
};
class exam:public student
{
   public:
     int i,*m,n;
   void acceptm()
   {
      cout<<"enter how many subjects:"<<endl;
      cin>>n;
      m=new int[n];
      cout<<"enter subjects marks="<<endl;
      for(i=0; i<n; i++)
      {
         cin>>m[i];
      }
   } 
};
class result:public exam
{
   public:
      void calc()
      {
         int i;
         for(i=0; i<n; i++)
         {
            s=s+m[i];
         }
         per=(float)s/n;
      }
      void disp()
      {
         cout<<"student number="<<sno<<endl;
         cout<<"student name="<<sname<<endl;
         cout<<"student address="<<add<<endl;
         cout<<"number of subject="<<n<<endl;
         cout<<"total marks obtained="<<s<<endl;
         cout<<"percentage="<<per<<endl;
      }
};
int main()
{
   result ob;
   ob.accepts();
   ob.acceptm();
   ob.calc();
   ob.disp();
}
