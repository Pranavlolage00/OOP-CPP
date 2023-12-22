#include<iostream>
using namespace std;
void avg(int a,int b, int c)
{
    float res=(float)a+b+c/3;
     cout<<"integer avg="<<res<<endl;
}
void avg(float x, float y,float z)
{ 
    float ans=(float)x+y+z/3;
    cout<<"float numbers avg="<<ans<<endl;
}
int main()
{
   int a,b,c; 
   float x,y,z;
   cout<<"enter three integer's:"<<endl;
   cin>>a>>b>>c;
   avg(a,b,c);
   cout<<"enter float numbers:"<<endl;
   cin>>x>>y>>z;
   avg(x,y,z);
    
}    
