#include<iostream>
using namespace std;
class add
{
    public: 
       int *a,*b,c;
       
      add()
      {
         a=new int(100);
         b=new int(500);
         c=*a+*b;
         cout<<"addition="<<c;
      }
};
int main()
{
  add ob;
}
