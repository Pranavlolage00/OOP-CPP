#include<iostream.h>
#include<conio.h>
int series(int n)
{
   int s=0;
   for(int i=1; i<=n; i++)
   {
     s=s+(i*i);
   }
  for( i=1; i<=n; i++)
  {
     cout<<"("<<i<<"*"<<i<<")"<<"+";
  }
  return s;
}
int main()
{
  int n,s;
  clrscr();
  cout<<"enter limit:";
  cin>>n;
 s=series(n);
 cout<<"\ncalculation="<<s;
 getch();
 return 0;
}