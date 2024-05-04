#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
int main()
{
    ifstream f1;
    ofstream f2;
    char ch;
    clrscr();
    f1.open("abc.txt",ios::in);
    f2.open("pqr.txt",ios::out);
    if(f1.fail())
    {
	cout<<"file not found...";
	getch();
	exit(0);
    }
    while(!f1.eof())
    {
       f1.get(ch);
       f2.put(ch);
    }
    cout<<"copy succesfully..";
    getch();
    return 0;
}
