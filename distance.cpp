#include<iostream>
using namespace std;
class distance
{
    public:
    float cm;
    float m;
    void accept(float cm,float m)
    {
       this->cm=cm;
       this->m=m;
    }
    void disp()
    {
       cout<<"meter="<<m<<endl;
       cout<<"centimeter="<<cm<<endl;
    }
    void larger(distance ob,distance ob1)
    {
         if(ob.m==ob1.m)
         {
            if(ob.cm>ob1.cm)
                ob.disp();
            else
                ob1.disp();
         }
         else if(ob.m>ob1.m)
               ob.disp();
           else
              ob1.disp();       
    }
}ob,ob1;
int main()
{
    ob.accept(3.5f,45.6f);
    ob1.accept(12.2f,78.63f);
    ob.disp();
    ob.larger(ob,ob1);
}
