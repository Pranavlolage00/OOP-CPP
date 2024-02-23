#include<iostream.h>
#include<conio.h>
class vehical
{
   public:
     int wno;
   void acceptv()
   {
     cout<<"\nenter number of wheels:";
     cin>>wno;
   }
};
class twheeler:public vehical
{
   public:
      float pricet;
      char namet[20],statust[50];
     void accepttwo()
     {
	cout<<"enter vehical price :";
	cin>>pricet;
	cout<<"enter name of vehical :";
	cin>>namet;
	cout<<"enter inshurance valid or not:";
	cin>>statust;
     }
     void dispt()
     {
	cout<<"\nname of vehical="<<namet;
	cout<<"\nnumber of wheels="<<wno;
	cout<<"\nvehical price="<<pricet;
	cout<<"\ninshurance status="<<statust<<endl;
     }
};
class thwheeler:public vehical
{
  public:
      float priceth;
      char nameth[20],statusth[50];
     void acceptthree()
     {
	cout<<"enter vehical price :";
	cin>>priceth;
	cout<<"enter name of vehical :";
	cin>>nameth;
	cout<<"enter inshurance valid or not:";
	cin>>statusth;
     }
     void dispth()
     {
	cout<<"\nname of vehical="<<nameth;
	cout<<"\nnumber of wheels="<<wno;
	cout<<"\nvehical price="<<priceth;
	cout<<"\ninshurance status="<<statusth<<endl;
     }


};
class fwheeler:public vehical
{
   public:
      float pricef;
      char namef[20],statusf[50];
     void acceptfour()
     {
	cout<<"enter vehical price :";
	cin>>pricef;
	cout<<"enter name of vehical :";
	cin>>namef;
	cout<<"enter inshurance valid or not:";
	cin>>statusf;
     }
     void dispf()
     {
	cout<<"\nname of vehical="<<namef;
	cout<<"\nnumber of wheels="<<wno;
	cout<<"\nvehical price="<<pricef;
	cout<<"\ninshurance status="<<statusf<<endl;
     }


};
void main()
{
   twheeler obt;
   thwheeler obth;
   fwheeler obf;

   clrscr();
   obt.acceptv();
   obt.accepttwo();

   obth.acceptv();
   obth.acceptthree();

   obf.acceptv();
   obf.acceptfour();

   obt.dispt();
   obth.dispth();
   obf.dispf();

   getch();
}
