#include<iostream>
using namespace std;
class myarray
{
   public:
      int *a,i,n;
    myarray(int n)
    {
       this->n=n;
       a=new int[n];
       cout<<" enter n numbers:";
       for(i=0; i<n; i++)
       {
         cin>>a[i];
       }
    }
    void disp()
    {
       cout<<"even numbers:"<<endl;
       for(i=0; i<n; i++)
       {
          if(a[i]%2==0)
           cout<<a[i]<<"  ";
       }
       cout<<"odd numbers:"<<endl;
        for(i=0; i<n; i++)
        {
          if(a[i]%2==1)
            cout<<a[i]<<"  ";
        }
    }
};
int main()
{
    int n;
   cout<<"enter limit:";
   cin>>n;
   myarray ob(n);
   ob.disp();	
}
