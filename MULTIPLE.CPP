#include<iostream.h>
#include<conio.h>
class internal
{
  public:
    int m1[5];
   void accepti()
   {
      cout<<"enter internal 5 subject marks:"<<endl;

      for(int i=0; i<5; i++)
      {
	  cin>>m1[i];
      }
   }
};
class external
{
  public:
     int m2[5];
     void accepte()
     {
	cout<<"enter external 5 subject marks:"<<endl;
	for(int i=0; i<5; i++)
	{
	    cin>>m2[i];
	}
     }
};
class practical
{
  public:
  int m3;
  void acceptp()
  {
     cout<<"enter prctical marks:"<<endl;
     cin>>m3;
  }
};
class result:public internal,public external,public practical
{
  public:
    float per;
    int t;
  void calc()
{
 t=0;
  for(int i=0; i<5; i++)
  {
     t=t+m1[i]+m2[i];
  }
  t=t+m3;
  per=(float)t/6;
}
  void disp()
  {  cout<<"total marks="<<t<<endl;
     cout<<"percentage="<<per<<endl;
  }
};
int main()
{   clrscr();
    result ob;
    ob.accepti();
    ob.accepte();
    ob.acceptp();
    ob.calc();
    ob.disp();
    getch();
    return 0;
}