#include<iostream.h>
#include<conio.h>
class student
{
   public:
      int rno;
      char sname[60];
	 void accepts()
	 {
	  cout<<"enter roll no:";
	  cin>>rno;
	  cout<<"enter student name:";
	  cin>>sname;
	 }
	 void disps()
	 {
	  cout<<"\nRoll number="<<rno;
	  cout<<"\nStudent Name="<<sname;
	 }
};
class theory:public virtual student
{
   public:
      int m1,m2,m3,m4;
      void acceptm()
      {
	cout<<"\nenter 4 theory subject marks:";
	cin>>m1>>m2>>m3>>m4;
      }

};
class practical:public virtual student
{
    public:
    int p1,p2;
   void acceptp()
   {
       cout<<"\nenter practical 2 subject marks:";
       cin>>p1,p2;
   }
};
class result:public theory,public practical
{
    public:
     float per,t;
  void calc()
  {
     t=0;
     per=0;
     t=m1+m2+m3+m4+p1+p2;
     cout<<"\nTOTAL MRAKS="<<t;
     per=(float)t/6;
     cout<<"\ntotal percentage="<<per;
     if(per>70)
     {
       cout<<"\nGrade=O";
     }
     else if(per>50)
     {
	cout<<"\n Grade= A";
     }
     else if(per>40)
     {
	cout<<"\n Grade=B";
     }
     else
     {
       cout<<"\nFAIL";
     }
  }

};
int main()
{
  result ob;
  int ch;
  clrscr();
  do{
     cout<<"\n1-accept student info \n2-display student info \n 3-calculate Result";
     cout<<"\n enter choice:";
     cin>>ch;
     switch(ch)
     {
	case 1: ob.accepts();
		break;
	case 2:ob.disps();
		break;
	case 3:ob.acceptm();
	       ob.acceptp();
	       ob.calc();
	       break;

     }
  }while(ch<4);
  getch();
  return 0;
}