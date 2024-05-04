#include<iostream.h>
#include<conio.h>
class matrix
{
  public:
     int r,c;
     int a[20][20];
     matrix(int row,int col)
     {
       r=row;
       c=col;
     }
    void acceptm()
    {
    cout<<"enter elements of matrix:"<<endl;
      for(int i=0; i<r; i++)
      {
	for(int j=0; j<c; j++)
	{
	 cin>>a[i][j];
	}
      }
    }
    void disp()
    {
       cout<<"\n display matrix.."<<endl;
       for(int i=0; i<r; i++)
       {
	 for(int j=0; j<c; j++)
	 {
	    cout<<"\t"<<a[i][j];

	 }
	 cout<<"\n";
       }
    }
    void transpose()
    {
      cout<<"transpose of matrix.."<<endl;
      for(int i=0; i<r; i++)
      {
	for(int j=0; j<c; j++)
	{
	   cout<<a[j][i]<<"\t";
	}
	 cout<<"\n";
      }
    }
};
int main()
{
   matrix ob(2,2);
   clrscr();
   ob.acceptm();
   ob.disp();
   ob.transpose();
   getch();
   return 0;
}