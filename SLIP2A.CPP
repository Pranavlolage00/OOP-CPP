//cyilender 3.14 r^2h
//cone 1/33.14r^2h
//spaher 4/3 3.14 r^3
#include<iostream.h>
#include<conio.h>
void volume(double r,double h)
{
    float ans=3.14*(r*r*h);
    cout<<"\nvolume of cyilender="<<ans;
}
void volume(float r,float h)
{
    int ans=3.14*r*r*h/3;
     cout<<"\nvolume of cone="<<ans;
}
void volume(int r)
{
   float ans=(4/3)*3.14*(r*r*r);
   cout<<"\nvolume of spaher="<<ans;
}
int main()
{  clrscr();
  volume(44.4f,55.4f);
  volume(45.66,47.36);
  volume(5);
   getch();
   return 0;
}