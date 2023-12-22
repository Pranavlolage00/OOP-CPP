#include<iostream>
using namespace std;
inline int max(int a, int b)
{
   return (a>b?a:b);
}
inline int min(int a,int b)
{
   return (a<b?a:b);
}
int main()
{
    int a,b;
    cout<<"enter two numbers :"<<endl;
    cin>>a>>b;
    cout<<"maximum number="<<max(a,b)<<endl;
    cout<<"minimum number="<<min(a,b)<<endl;
}

