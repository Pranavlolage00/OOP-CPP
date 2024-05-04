#include<iostream.h>
#include<conio.h>
class person
{
  public:
     char name[50],addr[50];
     float sal,taxamt;
     void accept()
     {
       cout<<"enter name:";
       cin>>name;
       cout<<"enter address:";
       cin>>addr;
       cout<<"enter salary=";
       cin>>sal;
     }
     void disp()
     {
       cout<<"\nfperson name="<<name<<endl;
       cout<<"person address="<<addr<<endl;
       cout<<"person salary="<<sal<<endl;
     }
     void calc()
     {
	if(sal<=20000)
	   cout<<"tax amount="<<sal<<endl;
	else if(sal>20000 && sal<=40000)
	   {
	      taxamt=sal*5/100;
	      cout<<"tax amount="<<taxamt<<endl;
	   }
	else if(sal>40000)
	{
	   taxamt=sal*10/100;
	   cout<<"tax amount="<<taxamt<<endl;
	}
     }



};
int main()
{
   person ob;
   ob.accept();
   ob.disp();
   ob.calc();
   getch();
   return 0;


}