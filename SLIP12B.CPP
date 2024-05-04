#include<iostream.h>
#include<conio.h>
class weight
{
  public:
     int wt;
       void accept()
       {
	  cout<<"enter weight in kg:";
	  cin>>wt;

       }
      void disp()
      {
	 cout<<"\n kilogram="<<wt<<"kg";
	 cout<<"\n gram="<<wt*1000<<"gm";
      }
      void operator +=(weight &ob)
      {
	  int ans=(float)wt+ob.wt;
	  cout<<"\n addition="<<ans<<endl;

      }
      void operator ==(weight &ob)
      {
	  if(ob.wt==wt)
	   cout<<"\nweight are equal.."<<endl;
	  else
	   cout<<"\nweight are not equal.."<<endl;
      }

};
int main()
{
   weight ob,ob1;
   clrscr();
   ob.accept();
   ob1.accept();
   ob.disp();
   ob1.disp();
   ob+=ob1;
   ob==ob1;
   getch();
   return 0;
}