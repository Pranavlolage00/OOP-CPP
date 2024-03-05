#include<iostream.h>
#include<conio.h>
#include<ctype.h>
class mystring
{
   public:
      char *s1;
      void accept()
      {
	s1=new char(50);
	cout<<"enter string:";
	cin>>s1;
      }
      void disp()
      {
	cout<<"\nstring =" <<s1;
      }
      void operator ! ()
      {

	for(int i=0; s1[i]!='\0'; i++)
	{
	  if(isupper(s1[i]))
	   s1[i]=tolower(s1[i]);
	else if(islower(s1[i]))
	  s1[i]=toupper(s1[i]);
	}
	cout<<"\n striing="<<s1;
      }
      void operator [] (int i)
      {
	  cout<<"\n char at"<<i<<"position="<<s1[i];
      }

};
int main()
{
  mystring ob;
  clrscr();
  ob.accept();
  ob.disp();
  !ob;
  ob[3];
  getch();
  return 0;
}