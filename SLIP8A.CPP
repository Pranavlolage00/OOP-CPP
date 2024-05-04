#include<iostream.h>
#include<conio.h>
#include<ctype.h>
class number
{
   public:

     void disp()
     {
    static int cnt;
       cnt++;
	cout<<"function call count="<<cnt<<endl;
     }
};
int main()
{
   number ob;
   clrscr();
   ob.disp();
   ob.disp();
   ob.disp();
   ob.disp();
   getch();
   return 0;
}