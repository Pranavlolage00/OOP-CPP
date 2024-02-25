#include<iostream.h>
#include<conio.h>
class B;
class A
{
  private:
   int a;
  public:
   void accept()
   {
      cout<<"enter number:";
      cin>>a;
   }
   friend void min_max(A &ob,B &ob1);
};
class B
{
  private:
    int a;
    public:
    void accept()
    {
       cout<<"enter number:";
       cin>>a;
    }
    friend void min_max(A &ob,B &ob1);
};
void min_max(A &ob,B &ob1)
{
  if(ob.a>ob1.a)
    cout<<"\nmaximum number="<<ob.a;
  else
     cout<<"\nmaximum number="<<ob1.a;
  if(ob.a<ob1.a)
    cout<<"\nminimum number="<<ob.a;
  else
    cout<<"\nminimum number="<<ob1.a;
}
int main()
{
   clrscr();
   A ob;
   ob.accept();
   B ob1;
   ob1.accept();
   min_max(ob,ob1);
   getch();
   return 0;

}

