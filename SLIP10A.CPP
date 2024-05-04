#include<iostream.h>
#include<conio.h>
class account
{
   public:
  int acc_number;
  char acc_type[60];
  float bal;
     void accept()
     {
	 cout<<"enter account numberf:"<<endl;
	 cin>>acc_number;
	 cout<<"enter account type:"<<endl;
	 cin>>acc_type;
	 cout<<"enter balance:"<<endl;
	 cin>>bal;
     }
     void disp()
     {
	 cout<<"account number="<<acc_number<<endl;
	 cout<<"account type="<<acc_type<<endl;
	 cout<<"acount balance="<<bal<<endl;
     }
};
int main()
{
  int n;
  clrscr();
  cout<<"enter limit:";
  cin>>n;
  account *ob=new account[n];
  for(int i=0; i<n; i++)
  {
      ob[i].accept();
  }
   cout<<"display details..."<<endl;
  for(i=0; i<n; i++)
  {
      ob[i].disp();
  }
  getch();
  return 0;
}