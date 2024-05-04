#include<iostream.h>
#include<conio.h>
void check(int num)
{
    if(num%2==0)
	cout<<"number is even..";
    else
       cout<<"number is odd..";
}
int main()
{
   int num;
   clrscr();
   cout<<"enter number to check even or odd:";
   cin>>num;
   check(num);
   getch();
   return 0;
}