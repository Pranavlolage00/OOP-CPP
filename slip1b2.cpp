/*b) Create a C++ class MyFile with data members file pointer and filename. Write necessary member
functions to accept and display File. Overload the following operators:
Operator Example Purpose
+ F3=F1+F2 Concatenate the contents of file F1 and F2 in F3.
! {F3 Changes the case of alternate characters of file F3

  */
#include<ctype.h>
#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<stdlib.h>
class MyFile
{
   public:
	    char ch;
	    ifstream f1,f2;
	    ofstream f3;
	    void accept()
	    {
	       f1.open("abc.txt",ios::in);
	       f2.open("pqr.txt",ios::in);
	       f3.open("cdj.txt",ios::out);
	       if(f1.fail()||f2.fail())
		 {
		   cout<<"Source file not found!";
		    getch();
		    exit(0);
		 }
	    }
	 void operator+(MyFile &ob1)
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
	   f1.close(); f2.close(); f3.close();
	  cout<<"\n Concat succ..";
	 }
	 void operator!()
	 {
	  while(!f1.eof())
	   {
	      f1.get(ch);
	      if(islower(ch))
		f3.put(toupper(ch));
	      else if(isupper(ch))
		f3.put(tolower(ch));
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
	   cout<<"\n Change Case";
	 }
};
int main()
{
   MyFile ob,ob1;
  clrscr();
   ob.accept();
   ob1.accept();

  // ob+ob1;
  !ob;
  getch();
}                     