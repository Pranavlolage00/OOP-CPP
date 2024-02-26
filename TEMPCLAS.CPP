#include<iostream.h>
#include<conio.h>
template <class T1>
class Demo
{
  public:
     Demo(T1 a)
     {
	T1 b=a*a;
	cout<<"\n square of given number="<<b;
     }
};
int main()
{
  clrscr();
  Demo<int>(5);
  Demo<float>(52.33);
  Demo<float>(47.3f);
  getch();
  return 0;
}