#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<fstream.h>
#include<string.h>
class movie
{
  public:
     char mname[60],dname[50];
     int year;
     float budget;
     void accept()
     {
	cout<<"\nenter movie name:";
	cin>>mname;
	cout<<"\nenter director name:";
	cin>>dname;
	cout<<"\nenter release year:";
	cin>>year;
	cout<<"\nenter budget:";
	cin>>budget;
     }
};
int main()
{
  int n;
  movie ob[50];
  char mname[50],dname[50],ch[100];
  int y;
  float b;
   fstream f1("movie.txt",ios::out|ios::in);
  clrscr();
   cout<<"enter limit:";
   cin>>n;
   for(int i=0; i<n; i++)
   {
      ob[i].accept();
   }
   for(i=0; i<n; i++)
   {
      strcpy(mname,ob[i].mname);
      strcpy(dname,ob[i].dname);
      y=ob[i].year;
      b=ob[i].budget;
      f1<<"\nmovie name="<<mname;
      f1<<"\nmovie director"<<dname;
      f1<<"\nmovie year"<<y;
      f1<<"\nbudget"<<b;
   }
   cout<<"\ninformation store";
   while(!f1.eof())
   {
      f1>>ch;
      cout<<ch;
   }
   cout<<"display data from file..";

   if(f1.fail())
   {
     cout<<"file not found..";
     exit(0);
   }
   while(!f1.eof())
   {
       cin.getline(ch,20);
       cout<<"\n"<<ch;
   }
   getch();
   return 0;

}
