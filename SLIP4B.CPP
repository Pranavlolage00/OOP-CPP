#include<iostream.h>
#include<conio.h>
class emp
{
   public:
      int eno;
      char ename[50];

   void accepte()
{
    cout<<"enter eno:";
    cin>>eno;
    cout<<"enter ename:";
    cin>>ename;
}
};
class fulltime:public emp
{
    public:
      int dw,nod,salf;
      void acceptf()
   {
	cout<<"enter daliy wages:";
	cin>>dw;
	cout<<"enter number of day's:";
	cin>>nod;
   }
  void calcf()
{
     salf=(float)dw*nod;
}
void dispf()
{
   cout<<"employee number="<<eno<<endl;
   cout<<"employee name="<<ename<<endl;
   cout<<"daliy wages="<<dw<<endl;
   cout<<"number of day's="<<nod<<endl;
   cout<<"employee salary="<<salf<<endl;

}
};
class parttime:public emp
{
   public:
     int hw,noh,salp;
    void acceptp()
{
	cout<<"enter hourly wages:";
	cin>>hw;
	cout<<"enter number of working hour:";
	cin>>noh;
}
  void calcp()
{
    salp=(float)hw*noh;
}
void dispp()
{
   cout<<"employee number="<<eno<<endl;
   cout<<"employee name="<<ename<<endl;
   cout<<"hourly wages="<<hw<<endl;
   cout<<"number of hour's="<<noh<<endl;
   cout<<"employee salary="<<salp<<endl;

}
};
int main()
{
    int n,i,ch;
    parttime ob1[100];
    fulltime ob2[100];
clrscr();
  do
{
    cout<<"\n1-accept n BOTH employeees and calculate salary\n2-display the details of n employees\n3-display details of employee having maximum salary for both\n";
cout<<"enter choice:";
cin>>ch;
switch(ch)
{
    case 1:cout<<"enter limit:";
	   cin>>n;
	cout<<"accept information for full time="<<endl;
	 for(i=0; i<n; i++)
	{
	  ob2[i].accepte();
	  ob2[i].acceptf();
	  ob2[i].calcf();
	}
       cout<<"accept information for part time="<<endl;
	for(i=0; i<n; i++)
	{
	   ob1[i].accepte();
	   ob1[i].acceptp();
	   ob1[i].calcp();
	}
     break;
    case 2:
	  cout<<"display information of fulltime employee="<<endl;
	for(i=0; i<n; i++)
	{
	ob2[i].dispf();
	}
	cout<<"display information of part time employee="<<endl;
	for(i=0; i<n; i++)
	{
	ob1[i].dispp();
	}
	break;
    case 3:
      int index1=0;
      int index2=0;
	for(i=1; i<=n; i++)
	{
	  if(ob1[index1].salp<ob1[i].salp)
	    {
	       index1=i;
	    }
	  if(ob2[index2].salf<ob2[i].salf)
	    {
	       index2=i;
	    }

	}
	cout<<"maximum salary of parttime employee="<<ob1[index1].salp<<endl;
		cout<<"maximum salary of fulltime employee="<<ob2[index2].salf<<endl;
	break;
 }
}while(ch<4);
getch();
return 0;
}
