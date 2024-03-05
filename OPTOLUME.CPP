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
  int operator +(add &ob)
  {
     return a+ob.a;
  }
};
int main()
{
   add ob,ob1;
   clrscr();
   ob.accept();
   ob1.accept();
   cout<<"additon="<<ob+ob1;
   getch();
   return 0;

}