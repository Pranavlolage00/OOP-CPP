#include<iostream.h>
#include<conio.h>
class shape
{
   public:
	  virtual void aofcircle(float r)=0;
	  virtual void aofspaher(float r)=0;
	  virtual void aofcyilender(float r,float h)=0;
};
class circle:public shape
{
  public:
 void aofcircle(float r)
  {
  int a=3.14*r*r;
     cout<<"area of circle="<<a<<endl;
  }
};
class spaher:public shape
{
  public:
  void aofspaher(float r)
  {
   int a=4*3.14*r*r;
     cout<<"area of spaher"<<a<<endl;
  }
};
class cyil:public shape
{
   float r;
 void aofcyilender(float r,float h)
  {
    int a=(2*3.14*r*h)+(2*3.14*r*r);
     cout<<"area of cyilnder="<<a<<endl;
  }
};
int main()
{
  circle ob1;
  spaher ob2;
  cyil ob3;
  clrscr();
  ob1.aofcircle(3.5);
  ob2.aofspaher(3.24);
  ob3.aofcyilender(5.1f,4.6f);
  getch();
  return 0;
}