#include<iostream.h>
#include<conio.h>
#include<string.h>
class date
{
   public:
      int dd,yy;
      char mon[50];
       date(int dd,int mm,int yy)
       {
	  this->dd=dd;
	  this->yy=yy;
	  if(mm==1)
	    strcpy(this->mon,"jan");
	  else if(mm==2)
	    strcpy(this->mon,"feb");
	  else if(mm==3)
	     strcpy(this->mon,"mar");
	  else if(mm==4)
	     strcpy(this->mon,"apr");
	 else if(mm==5)
	    strcpy(this->mon,"may");
	 else if(mm==6)
	     strcpy(this->mon,"jun");
	 else if(mm==7)
	     strcpy(this->mon,"july");
	 else if(mm==8)
	     strcpy(this->mon,"aug");
	 else if(mm==9)
	    strcpy(this->mon,"sep");
	 else if(mm==10)
	    strcpy(this->mon,"oct");
	 else if(mm==11)
	    strcpy(this->mon,"nov");
	 else
	    strcpy(this->mon,"dec");
       }
       void disp()
       {
	  cout<<"date="<<dd<<"-"<<mon<<"-"<<yy;
       }
};
int main()
{
   int dd,mm,yy;
   clrscr();
   cout<<"enter date:";
   cin>>dd>>mm>>yy;
   date ob(dd,mm,yy);
   ob.disp();
   getch();
   return 0;
}