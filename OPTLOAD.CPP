#include<iostream.h>
#include<conio.h>
class add
{
  public:
   int a;
   void accept()
   {
      cout<<"enter number:";
      cin>>a;
   }
   friend int operator + (add &ob,add &ob1);
};
int operator +(add &ob,add &ob1)
{
   return ob.a+ob1.a;
}
int main()
{
   add ob,ob1;
   clrscr();
   ob.accept();
   ob1.accept();
   cout<<"addition="<<ob+ob1;
   getch();
   return 0;
}