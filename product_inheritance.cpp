#include<iostream>
using namespace std;
class product
{
  public:
     int pid;
     char pname[20];
     float price;
    void acceptp()
    {
       cout<<"enter prduct id:";
       cin>>pid;
       cout<<"enter product name:";
       cin>>pname;
       cout<<"enter product price:";
       cin>>price;       
    }
};
class discount:public product
{
   public:
        int d;
        float t,r;
     void acceptd()
     {
        cout<<"enter discount in percentage:";
        cin>>d;
     }
     void calc()
     {
         r=price*d/100;
         t=(float)t+price-r;
     }
     void disp()
     {
        cout<<"product id="<<pid<<endl;
        cout<<"product name="<<pname<<endl;
        cout<<"product price="<<price<<endl;
        cout<<"discout in percentage="<<d<<endl;
        cout<<"discount in $ Rupees="<<r<<endl;
        cout<<"Grand Total="<<t<<endl;
     }
};
int main()
{
   int n,i;
  cout<<"enter how many product:";
  cin>>n;
   discount ob[n];
   for(i=0; i<n; i++)
   {
      ob[i].acceptp();
      ob[i].acceptd();
      ob[i].calc();
   }
   cout<<"display all Record's="<<endl;
      for(i=0; i<n; i++)
      {
        ob[i].disp();
      }
  
}


