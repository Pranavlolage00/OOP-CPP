#include<iostream>
using namespace std;
inline int cube(int n2)
{
   return n2*n2*n2;
}
inline int  square(int n1)
{
  return n1*n1;
}
int main()
{
   int n1,n2;
   cout<<"enter number to find square:"<<endl;
   cin>>n1;
   cout<<"square of that number="<<square(n1)<<endl;
   cout<<"enter number to find cube:"<<endl;
   cin>>n2;
   cout<<"cube of that number="<<cube(n2)<<endl;
}


