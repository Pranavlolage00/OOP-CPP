#include<iostream.h>
#include<conio.h>
#include<string.h>
class string
{
 public:
   char s1[50];
    void accept()
    {
      cout<<"enter string:";
      cin>>s1;
    }
    void disp()
    {
       cout<<"\nstring="<<s1;
    }
     friend void operator == (string &ob,string &ob1);
};
 void operator == (string &ob,string &ob1)
    {
       int k=strcmp(ob.s1,ob1.s1);
       if(k==0)
	 cout<<"\nstring is equal..";
       else
	 cout<<"\nstring is not equal..";
    }
    int main()
    {
      string ob,ob1;
      clrscr();
      ob.accept();
      ob1.accept();
      ob.disp();
      ob1.disp();
      ob==ob1;
      getch();
      return 0;

    }