#include<iostream>
using namespace std;
class number
{
   public:
   static void display()
   {  
         static int cnt;
         cnt++;
         cout<<"count="<<cnt<<endl;  
   }
};
int main()
{
   number ob,ob1,ob2;
   ob.display();
   ob1.display();
   ob2.display();
   
}

