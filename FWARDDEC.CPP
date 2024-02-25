#include<iostream.h>
#include<conio.h>
class add1; //forward declartion
class add
{
   private:
    int a;
   public:
   void accept()
   {
      cout<<"enter value of a:";
      cin>>a;
   }
  friend void addition(add &ob,add1 &ob1);
};
class add1
{
  private:
  int a;
  public:
   void accept()
   {
     cout<<"enter value of a:";
     cin>>a;
   }
  friend void addition(add &ob,add1 &ob1);
};
void addition(add &ob,add1 &ob1)
{
  int c=ob.a+ob1.a;
  cout<<"addition="<<c;
}
int main()
{
  clrscr();
  add ob;
  ob.accept();
  add1 ob1;
  ob1.accept();
  addition(ob,ob1);
  getch();
  return 0;
}