#include<iostream.h>
#include<conio.h>
inline int max(int a,int b)
{
   return ((a>b)?a:b);
}
inline int min(int a,int b)
{
   return ((a<b)?a:b);
}
int main()
{
   int a,b;
   clrscr();
   cout<<"enter value of a:";
   cin>>a;
   cout<<"enter value of b:";
   cin>>b;
   cout<<"maximum number="<<max(a,b)<<endl;
   cout<<"minimum number="<<min(a,b)<<endl;
   getch();
   return 0;
}

