#include<iostream.h>
#include<conio.h>
#include<math.h>
class point
{
  public:
     int x,y;
     void accept()
     {
	cout<<"enter value of x and y:";
	cin>>x>>y;
     }
     void disp()
     {
	cout<<"\n point:x="<<x<<"\ty="<<y;
     }
     friend void operator - (point &ob1,point &ob2);
};
void operator - (point &ob1,point &ob2)
{
 int d=sqrt((ob2.x-ob1.x)*(ob2.x-ob1.x)+(ob2.y-ob1.y)*(ob2.y-ob1.y));
 cout<<"\ndistance="<<d;
}
int main()
{
  point ob1,ob2;
  clrscr();
  ob1.accept();
  ob2.accept();
  ob1.disp();
  ob2.disp();
  ob1-ob2;
  getch();
  return 0;
}