#include<iostream>
using namespace std;
class collage
{
  public:
    int cno;
    char cname[20],add[50]; 
     void acceptc()
     {
        cout<<"enter collage number:"<<endl;
        cin>>cno;
        cout<<"enter collage name"<<endl;
        cin>>cname;
        cout<<"enter collage address:"<<endl;
        cin>>add;
     }
};
class student:public collage
{
   public:
     int sno;
     char sname[20];
     float per;
    void accepts()
    {
       cout<<"enter sno:"<<endl;
       cin>>sno;
       cout<<"enter student name:"<<endl;
       cin>>sname;
       cout<<"enter student percentage:"<<endl;
       cin>>per;
    }
    void disp()
    {
       cout<<"collage no="<<cno<<endl;
       cout<<"collage name="<<cname<<endl;
       cout<<"collage address="<<add<<endl;
       cout<<"student no="<<sno<<endl;
       cout<<"student name="<<sname<<endl;
       cout<<"student per="<<per<<endl;
    }
};
int main()
{
   student ob;
   ob.acceptc();
   ob.accepts();
   ob.disp();
}
