#include<iostream>
using namespace std;
class add
{
   public:
      int a=10,b=40;
     add()
    {
       cout<<"addition="<<a+b<<endl;;
    }
};
class sub:public add
{
   public:
      sub()
      {
         cout<<"subtraction="<<a-b<<endl;
      }
};
class mult:public sub
{
   public:
     mult()
     {
     cout<<"multiplication="<<a*b<<endl;
     }
};
int main()
{
  mult ob;
}



