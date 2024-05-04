#include<iostream.h>
#include<conio.h>
class Time
{
   public:
      int hh,mm,ss;
      void accept()
      {
	 cout<<"enter how many hours:";
	 cin>>hh;
	 cout<<"enter how many minutes:";
	 cin>>mm;
	 cout<<"enter how many seconds:";
	 cin>>ss;
      }
      void disp()
      {
	cout<<"Time= "<<hh<<":"<<mm<<":"<<ss<<endl;
      }
      void diff(Time &ob1,Time &ob2)
      {
	  int h1=ob1.hh-ob2.hh;
	  int m1=ob1.mm-ob2.mm;
	  int s1=ob1.ss-ob2.ss;
	  cout<<"\n differnce between two time=";
	  cout<<h1<<":"<<m1<<":"<<s1;
      }
};
int main()
{
   Time ob1,ob2,ob3;
   int ch;
   clrscr();
   do
   {
      cout<<"\n1-accept time\n2-display time in format HH:MM:SS\n3-diffrene";
      cout<<"\nenter choice:";
      cin>>ch;
      switch(ch)
      {
	 case 1:ob1.accept();
		break;
	 case 2:ob1.disp();
		 break;
	 case 3:ob1.accept();
		ob2.accept();
		ob3.diff(ob1,ob2);
		break;
      }
   }while(ch<4);
   getch();
   return 0;
}