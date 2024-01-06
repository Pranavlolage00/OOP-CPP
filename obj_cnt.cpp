#include<iostream>
using namespace std;
class product
{
   public:
  int pid,qty,cnt1;
  char pname[20];
   float price;
   
 void accept()
   {
     static int cnt;
     cout<<"ener product id:";
     cin>>pid;
     cout<<"enter product name:";
     cin>>pname;
     cout<<"enter quantity:";
     cin>>qty;
     cout<<"enter price of product:";
     cin>>price;
     cnt++;
     cnt1=cnt;
     
   }
   void disp()
   {
      cout<<"object count="<<cnt1<<endl;
   }
};
int main()
{
   product ob1,ob2,ob3;
   ob1.accept();
   ob1.disp();
   ob2.accept();
   ob2.disp();
   ob3.accept();
   ob3 .disp();   
}
