#include<iostream.h>
#include<conio.h>
#include<string.h>
class mystring
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
    void operator < (mystring &ob)
    {
       int k=strcmp(s1,ob.s1);
       if(k==1)
	 cout<<"\n"<<s1<<"string is greater";
       else
	 cout<<"\n"<<ob.s1<<"\tstring is greater";
    }
    void operator != (mystring &ob)
    {
       int k=strcmp(s1,ob.s1);
       if(k!=0)
	 cout<<"\nstring is not equal..";
       else
	 cout<<"\n string is equal..";
    }
    void operator + (mystring &ob)
    {
       strcat(s1,ob.s1);
       cout<<"\nconcat string="<<s1;
    }
};
int main()
{
  mystring ob,ob1;
  clrscr();
  ob.accept();
  ob1.accept();
  ob.disp();
  ob1.disp();
  ob<ob1;
  ob!=ob1;
  ob+ob1;
  getch();
  return 0;
}