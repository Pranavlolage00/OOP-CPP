#include<iostream>
#include<string.h>
using namespace std;
class emp
{
  public:
     int eno;
     char ename[20];
     float sal;
     char desig[20];
     void accept(int eno,char ename[20],char desig[20],float sal)
     {
         this->eno=eno;
         this->sal=sal;
         strcpy(this->ename,ename);
         strcpy(this->desig,desig);
     }
     void disp()
     {
        cout<<"\n emp id="<<eno;
        cout<<"\n emp name="<<ename;
        cout<<"\n emp salary="<<sal;
        cout<<"\n emp designation="<<desig;
     }
}ob,ob1;
int main()
{
    ob.accept(101,"om","worker",15000);
    ob1.accept(102,"sai","ownar",45000);
    if(ob.sal>ob1.sal)
       ob.disp();
    else
      ob1.disp();

}
