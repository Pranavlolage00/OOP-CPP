#include<iostream.h>
#include<conio.h>
class add
{
   public:
   int a;
   void accept()
   {
      cout<<"enter value of a:";
      cin>>a;
   }
   void disp()
   {
      cout<<"\nvalue of a:"<<a;
   }
   void operator ++()
   {
     a++;
   }
};
int main()
{
  add ob;
  clrscr();
  ob.accept();
  ob.disp();
  ob++;
  ob.disp();
  getch();
  return 0;
}