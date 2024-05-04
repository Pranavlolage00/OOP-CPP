#include<iostream.h>
#include<conio.h>
class string
{
  public:
     char str[50];
	void accepts()
	{
	   cout<<"enter string:"<<endl;
	   cin>>str;
	}
	void disp()
	{
	   cout<<"org string= "<<str<<endl;
	}
	int replace(char ch1,char ch2='r')
	{
	       int cnt=0;
	    for(int i=0; str[i]!='\0'; i++)
	    {
		 if(str[i]==ch1)
		 {
		     str[i]=ch2;
		     cnt++;
		 }
	    }
	     if(i=='\0')
	       cout<<"ch1 is not found..";
	     else
	       cout<<"replaced string= "<<str<<endl;

	    return cnt;
	}
};
int main()
{
   string ob;
   clrscr();
   ob.accepts();
   ob.disp();
 int cnt=ob.replace('f','g');
 cout<<"occurances ofreplacement."<<cnt<<endl;
   getch();
   return 0;
}