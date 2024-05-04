#include<iostream.h>
#include<conio.h>
#include<string.h>
class city
{
   public:
     int city_code,pop;
     char city_name[50];
     void accept()
     {
       cout<<"enter city code:" ;
       cin>>city_code;
       cout<<"enter city name:";
       cin>>city_name;
       cout<<"enter population:";
       cin>>pop;
     }
     void search(int n,city ob[])
     {
	char cname[50];
       cout<<"enter name to search:";
       cin>>cname;
       for(int i=0; i<n; i++)
       {
	   if(strcmp(ob[i].city_name,cname)==0)
	   {
	     cout<<"city code="<<ob[i].city_code<<endl;
	     cout<<"city name="<<ob[i].city_name<<endl;
	     cout<<"city population="<<ob[i].pop<<endl;
	   }
       }
     }
}ob[50];
int main()
{
   city ob1;
   int n;
   clrscr();
   cout<<"enter limit:";
   cin>>n;
   for(int i=0; i<n; i++)
   {
      ob[i].accept();
   }
   ob1.search(n,ob);
   getch();
   return 0;
}