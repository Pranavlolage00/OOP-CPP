#include<iostream>
using namespace std;
int main()
{
   int *a,i,n;
   cout<<"enter limit:";
   cin>>n;
   a=new int[n];
   cout<<"enter n numbers in an array:";
   for(i=0; i<n; i++)
   {
      cin>>a[i];
   }
  cout<<"display n elements"<<endl;
  for(i=0; i<n; i=i+2)
  {
     cout<<"\t"<<a[i];
  }
}
