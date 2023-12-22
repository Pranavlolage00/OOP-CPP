#include<iostream>
using namespace std;
class person
{
   public:
   char name[20],addr[20];
   float sal,tax;
   void accept()
   {
      cout<<"enter person name:"<<endl;
      cin>>name;  
      cout<<"enter address:"<<endl;
      cin>>addr;
      cout<<"enter salary:"<<endl;
      cin>>sal;
   }
   void cal() 
   {
     if(sal<=20000)
       tax=0;
    else if(sal<=40000)
      tax=sal*5/100;
    else
       tax=sal*10/100;
   }
   void disp()
   {
        cout<<"person name="<<name<<endl;
        cout<<"person address="<<addr<<endl;
        cout<<"person salary="<<sal<<endl;
        cout<<"TAX="<<tax<<endl;
   
   }
};
int main()
{
   person ob;
   ob.accept();
   ob.cal();
   ob.disp();
}                                                                                                         
