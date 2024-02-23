#include<iostream.h>
#include<conio.h>
class student
{
   public:
     int rno;
     char sname[20],addr[20];
     void accepts()
     {
	cout<<"enter roll no name address:";
	cin>>rno>>sname>>addr;
     }
};
class exam:public student
{
  public:
  int m[6];
  void accept_mark()
  {
    cout<<"enter 6 sub marks:";
    for(int i=0; i<5; i++)
    {
      cin>>m[i];
    }
  }
};
class result:public exam
{
   public:
   int t;
   float per;
   void calc()
   {    t=0;
      for(int i=0; i<5; i++)
      {
	 t=t+m[i];
      }
      per=(float)t/5;
   }
void disp()
 {
    cout<<"roll no="<<rno<<endl;
    cout<<"student name="<<sname<<endl;
    cout<<"address="<<addr<<endl;
    cout<<"total of marks="<<t<<endl;
    cout<<"percentage="<<per<<endl;
 }
};
int main()
{  clrscr();
   result ob;
   ob.accepts();
   ob.accept_mark();
   ob.calc();
   ob.disp();
   getch();
   return 0;
}