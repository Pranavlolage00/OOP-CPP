#include<iostream.h>
#include<conio.h>
inline int calc(int now,float pr=500)
{
  return (float)now*pr;
}
void disp(char wn[],int now,int sal)
{
   cout<<"\n worker name="<<wn;
   cout<<"\n Number of Working hours="<<now;
   cout<<"\n worker salary="<<sal;
}
int main()
{
   int now,sal;
   char wn[50];
   clrscr();
   cout<<"enter worker name:";
   cin>>wn;
   cout<<"enter number of hours:";
   cin>>now;
   sal=calc(now);
   disp(wn,now,sal);
   getch();
   return 0;
}