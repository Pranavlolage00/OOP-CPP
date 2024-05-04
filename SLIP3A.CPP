#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void swap(int &a,int &b)
{
   cout<<"\nbefore swap value of a="<<a;
   cout<<"\nbefore swap value of b="<<b;
   int t=a;
       a=b;
       b=t;
 }
int main()
{
   int a,b;
   clrscr();
   cout<<"\nenter value of a:";
   cin>>a;
   cout<<"\nenter value of b";
   cin>>b;
   swap(a,b);
   cout<<"\nafter swap value of a="<<a;
   cout<<"\nafter swap value of b="<<b;
   getch();
 return 0;
}