#include<iostream>
using namespace std;
class A
{
   public:
    A()
    {
      cout<<"i am A"<<endl;
    }
};
class B:public A
{
   public:
   B()
   {
     cout<<"I am B";
   }
};
int main()
{
   B ob;
}

