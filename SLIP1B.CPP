#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<ctype.h>
#include<stdlib.h>
class myfile
{
  public:
	char ch;
	ifstream f1,f2;
	ofstream f3;
	void accept()
	{
	   f1.open("abc.txt",ios::in);
	   f2.open("pqr.txt",ios::in);
	   f3.open("xyz.txt",ios::out);
	   if(f1.fail() || f2.fail())
	   {
	     cout<<"source not found..";
	     exit(0);
	     getch();
	   }

	}
	void operator +(myfile &ob)
	{
	  while(!f1.eof())
	  {
	     f1.get(ch);
	     f3.put(ch);
	  }
	  while(!f2.eof())
	  {
	      f2.get(ch);
		      f3.put(ch);
	  }
	  f1.close();
	  f2.close();
	  f3.close();
	}
	void operator!()
	{
	 while(!f1.eof())
	 {
	 f1.get(ch);
	      if(isupper(ch))
	      {
		 f3.put(tolower(ch));
	      }
	   else if(islower(ch))
	   {
	       f3.put(toupper(ch));
	   }
	   else
	     f3.put(ch);
	 }
	 while(!f2.eof())
	 {
	    f2.get(ch);
	    if(islower(ch))
	      f3.put(toupper(ch));
	    else if(isupper(ch))
	      f3.put(tolower(ch));
	    else
	      f3.put(ch);
	 }
	 f1.close();
	 f2.close();
	 f3.close();
	 cout<<"\n change case ...";
       }
  };
  int main()
  {
   myfile ob,ob1;
   clrscr();
   ob.accept();
   ob1.accept();
   ob+ob1;
  // !ob;
   getch();
   return 0;

  }