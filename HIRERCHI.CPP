#include<iostream.h>
#include<conio.h>
class college
{
   public:
   int cno;
   char cname[30],caddr[60];
   void accept()
   {
      cout<<"enter cno cname caddr:";
      cin>>cno>>cname>>caddr;
   }
   void disp()
   {
     cout<<"college number="<<cno<<endl;
     cout<<"college name="<<cname<<endl;
     cout<<"college address="<<caddr<<endl;
   }
};
class teacher:public college
{
   public:
      int tno;
      char tname[30];
      float sal;
   void acceptt()
   {
      cout<<"enter tno tname sal:";
      cin>>tno>>tname>>sal;
   }
   void dispt()
   {
      cout<<"teacher number="<<tno<<endl;
      cout<<"teacher name="<<tname<<endl;
      cout<<"salary="<<sal<<endl;
   }
};
class student:public college
{
   public:
     int rno;
     char sname[10];
     float per;
    void accepts()
    {
       cout<<"enter rno sname per:";
       cin>>rno>>sname>>per;
    }
    void disps()
    {
      cout<<"student rno="<<rno<<endl;
      cout<<"student name="<<sname<<endl;
      cout<<"percentage="<<per<<endl;
    }
};
int main()
{
   clrscr();
   teacher ob;
   student ob1;
   ob.accept();
   ob.acceptt();
   ob1.accepts();
   ob.disp();
   ob.dispt();
   ob1.disps();
   getch();
   return 0;
}

