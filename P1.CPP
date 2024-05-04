#include<iostream.h>
#include<conio.h>
void fact(int n)
{
   int f=1,i;
   for(i=1; i<=n; i++)
   {
     f=f*i;
   }
   cout<<"factorial of number:"<<f;
}
int main()
{  int num;
    clrscr();
   cout<<"enter number:";
   cin>>num;
   fact(num);
   getch();
   return 0;
}