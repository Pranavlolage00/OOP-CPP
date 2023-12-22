#include<iostream>
using namespace std;  
class cuboid 
{
  public:
  float l,b,h;
  void setvalues(float l1,float b1,float h1)
  {
        l=l1;
        b=b1;
        h=h1;
  }
  void getvalues()
  {
      cout<<"length="<<l<<endl;
      cout<<"breadth="<<b<<endl;
      cout<<"height="<<h<<endl;
  }
  inline float volume()
  {
     return (l*b*h);
  }
  inline float area()
  {
     return 2*(l*b)+(b*h)+(h*l);
  }
};
int main()
{
    cuboid ob;
   float l,b,h;
   cout<<"enter length:";
   cin>>l;
   cout<<"enter breadth:";
   cin>>b;
   cout<<"enter height:";
   cin>>h;
   ob.setvalues(l,b,h);
   ob.getvalues();
   cout<<"volume of cuboid="<<ob.volume()<<endl;
   cout<<"surface area of cuboid="<<ob.area()<<endl;
}

