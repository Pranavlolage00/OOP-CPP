#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
   ofstream f1,f2;
   int ch;
   f1.open("e.txt",ios::out);
   f2.open("o.txt",ios::out);
   clrscr();
   if(f1.fail() && f2.fail())
   {
      cout<<"file not found";
      getch();
      exit(0);
   }
   for(int i=1; !f1.eof() && !f2.eof() && i<argc-2; i++)
   {
       ch=atoi(argv[i]);
       if(ch%2==0)
       {
	   f1.put(ch);
       }
       else
	  f2.put(ch);
   }
   cout<<"\noperation complete..."<<argc;
   f1.close();
   f2.close();
   getch();
   return 0;
}