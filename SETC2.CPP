#include<iostream.h>
#include<conio.h>
void series(int n)
{
   int f=1,i;
   float s=0;
   for(i=1; i<=n; i++)
   {
      f=(f*i);
      s=(float)s+(i/f);
   }
   for(i=1; i<=n; i++)
   {
      cout<<i<<"/"<<i<<"!"<<"+";
   }
   cout<<"\ncalculation="<<s;

}
int main()
{
   float n;
   clrscr();
   cout<<"enter limit:";
   cin>>n;
   series(n);
   getch();
   return 0;
}