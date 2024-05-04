#include<iostream.h>
#include<conio.h>
class vector
{
   public:
      int *a,*b,*c,n1,n2,n3,k;
      vector(int n1,int n2)
      {
	  this->n1=n1;
	  this->n2=n2;
	  k=0;
	  a=new int[n1];
	  b=new int[n2];
	  this->n3=n1+n2;
	  c=new int[n3];
      }
      void accept1()
      {
	 cout<<"\nenter elements of 1st vector:"<<endl;
	 for(int i=0; i<n1; i++)
	 {
	     cin>>a[i];
	 }
      }
      void accept2()
      {
	 cout<<"\nenter elements of 2nd vector:"<<endl;
	 for(int i=0; i<n2; i++)
	 {
	     cin>>b[i];
	 }
      }
	void disp1()
      {
	 cout<<"\ndisplay elements of 1st vector="<<endl;
	 for(int i=0; i<n1; i++)
	 {
	    cout<<" "<<a[i];
	 }
      }
	void disp2()
      {
	 cout<<"\ndisplay elements of 2nd vector="<<endl;
	 for(int i=0; i<n2; i++)
	 {
	    cout<<" "<<b[i];
	 }
      }
      void concat()
      {

	  for(int i=0,j=0; i<n1&&j<n2; i++,j++)
	  {
	     c[k++]=a[i];
	     c[k++]=b[j];
	  }
	  cout<<"\nconcatnate"<<endl;
	  for( i=0; i<n3; i++)
	  {
	     cout<<"\t"<<c[i];
	  }
      }
     void sort()
     {
	for(int pass=1; pass<n3; pass++)
	{
	  for(int i=1; i<n3-pass; i++)
	  {
	    if(c[i]>c[i+1])
	    {
		int temp=c[i];
		  c[i]=c[i+1];
		  c[i+1]=temp;
	    }
	  }
	}
	cout<<"\ndisplay sorted data="<<endl;
	for(int i=0; i<n3; i++)
	{
	    cout<<" "<<c[i];
	}
     }
     void union1()
     {
      cout<<"\n union="<<endl;
	  for(int i=0; i<n3; i+2)
	  {
	  if(c[i]!=c[i+1])
	  {
	     cout<<c[i]<<" ";

	  }
	 }
     }
};
int main()
{
  vector ob(5,5);
    clrscr();
    ob.accept1();
    ob.disp1();
    ob.accept2();
    ob.disp2();
    ob.concat();
    ob.sort();
    ob.union1();
   getch();
   return 0;
}