#include<iostream>
using namespace std;
inline float area(float r)
{
   return 3.14*r*r;
}
inline float circum(float r)
{
   return 2*3.14*r;
}
int main()
{
   float r1,r2;
   cout<<"enter radius to find area:"<<endl;
   cin>>r1;
   cout<<"area of circle="<<area(r1)<<endl;
   cout<<"enter radius to find circumfernce:"<<endl;
   cin>>r2;
   cout<<"circumfernce of circle="<<circum(r2)<<endl;
}
