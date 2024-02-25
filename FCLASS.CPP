#include<iostream.h>
#include<conio.h>
class A
{
  private:
     int a,b;
  public:
   void accept()
   {
      cout<<"enter two numbers:";
      cin>>a>>b;
   }
 friend class B;
};
class B
{
  public:
  void show(A &ob)
  {
     int c=ob.a+ob.b;
     cout<<"addition of two numbers="<<c;
  }
};
int main()
{  clrscr();
   A ob;
   ob.accept();
   B ob1;
   ob1.show(ob);
   getch();
   return 0;
}