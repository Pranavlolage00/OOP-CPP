#include<iostream.h>
#include<conio.h>
class square;
class rectangle
{
  public:
     float l,b;
     void acceptr()
     {
	 cout<<"enter lenghth :";
	 cin>>l;
	 cout<<"enter bridth:";
	 cin>>b;
    }
  friend void area(square &ob,rectangle &ob1);
};
class square
{
  public:
    float s;
    void accepts()
    {
       cout<<"enter side to calculate area of square:";
       cin>>s;
    }
    friend void area(square &ob,rectangle &ob1);
};
void area(square &ob,rectangle &ob1)
{
  float areas=ob.s*ob.s;
  cout<<"area of square="<<areas<<endl;
  float arear=ob1.l*ob1.b;
  cout<<"area of rectangle="<<arear<<endl;

  if(arear>areas)
     cout<<"area of rectangle is greater than square"<<endl;
  else
    cout<<"area of square is greater than rectangle"<<endl;
}
int main()
{
  square ob;
  rectangle ob1;
  clrscr();
  ob.accepts();
  ob1.acceptr();
  area(ob,ob1);
  getch();
  return 0;
}
