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
   void disp(A &ob)
   {
      int x=ob.a*ob.b;
      cout<<"multiplication="<<x;
   }
};
int main()
{
  clrscr();
  A ob;
  ob.accept();
  B ob1;
  ob1.disp(ob);
  getch();
  return 0;
}