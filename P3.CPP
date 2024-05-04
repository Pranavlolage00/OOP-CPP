#include<iostream.h>
#include<conio.h>
void prime(int num)
{
  int flag=0;
  for(int i=2; i<num; i++)
  {
     if(num%i==0)
     {
     flag=1;
     break;
     }
  }
  if(flag==0)
    cout<<"given number is prime..";
  else
    cout<<"given number is not prime..";
}
int main()
{
   int num;
   clrscr();
   cout<<"enter number:";
   cin>>num;
   prime(num);
   getch();
   return 0;
}