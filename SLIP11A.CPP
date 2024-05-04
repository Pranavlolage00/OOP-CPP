#include<iostream.h>
#include<conio.h>
class My_array
{
   public:
     int *a,n;
     My_array(int n)
     {
	 this->n=n;
	a=new int[n];
	cout<<"enter n elements of an array:"<<endl;
	for(int i=0; i<n; i++)
	{
	   cin>>a[i];
	}
     }
     void disp()
     {
	cout<<"display elements...";
	for(int i=0; i<n; i++)
	{
	   cout<<" "<<a[i];
	}
     }
     void sum()
     {
	int s=0;
	for(int i=0; i<n; i++)
	{
	   s=s+a[i];
	}
	cout<<"\n sum of given array="<<s<<endl;
     }
     ~My_array()
     {
	delete a;
     }
};
int main()
{
   int n;
   clrscr();
   cout<<"enter limit:";
   cin>>n;
   My_array ob(n);
   ob.disp();
   ob.sum();
   getch();
   return 0;
}