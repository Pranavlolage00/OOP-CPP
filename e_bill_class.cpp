#include<iostream>
using namespace std;
class E_Bill
{
   public:
   char cust_name[20];
   int meter_id;
   int unit;
   float total=150.00;
      void accept()
      {
         cout<<"enter customer name:"<<endl;
         cin>>cust_name;
         cout<<"enter meter-id"<<endl;
         cin>>meter_id;
         cout<<"enter units:"<<endl;
         cin>>unit;
      }
      void cal()
      {
         if(unit<=100)
          {
            total=total+(unit*1);
              if(total>250)
                total=total+(total*0.15);
          }
          else if(unit>100)
          {
             total=total+(unit*2);
               if(total>250)
                 total=total+(total*0.15);
          }
          else
           {
              total=total+(unit*5);
               if(total>300)
                 total=total+(total*5);
                    total=total+(total*0.15);   
           }
      }
       void disp()
       {
         cout<<"customer name="<<cust_name<<endl;
         cout<<"customer meter_id="<<meter_id<<endl;
         cout<<"units="<<unit<<endl;
         cout<<"total bill="<<total<<endl;
       }
    };
    int main()
    {
       E_Bill ob;
       ob.accept();
       ob.cal();
       ob.disp();
       
    }
