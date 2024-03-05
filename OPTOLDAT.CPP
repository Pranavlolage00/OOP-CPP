#include<iostream.h>
#include<conio.h>
class date
{
   public:
     int dd,mm,yy;
     void operator >>(date &ob)
     {
      cout<<"enter current date:";
       cin>>dd>>mm>>yy;
     }
     void operator <<(date &ob)
     {
       cout<<"\ncurent date="<<dd<<"/"<<mm<<"/"<<yy;
     }
};
int main()
{
  date ob;
  clrscr();
  ob>>ob;
  ob<<ob;
  getch();
  return 0;
}