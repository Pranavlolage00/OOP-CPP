#include<iostream.h>
#include<conio.h>
class point
{
  public:
    int x,y;
   point()
   {
      x=0;
      y=0;
   }
  void setpoint(int a,int b)
  {
      x=a;
      y=b;
  }
  void showpoint()
  {
      cout<<"co-ordinate point of x="<<x<<endl;
      cout<<"co-ordinate point of y="<<y<<endl;
  }
};
int main()
{
   point ob;
   clrscr();
   ob.setpoint(5,42);
   ob.showpoint();
   getch();
   return 0;
}