#include <iostream.h>
#include<conio.h>

int main() 
{
   int size;
   clrscr();
   cout<<"Enter limit:";
   cin>>size;
  for (int i = 0; i < size; i++)
  {
    for (int j = 1; j < size - i; j++) 
    {
      cout << " ";
    }
 
    for (int k = 0; k <= i; k++) 
    {
      cout << "*";
    }
    cout << "\n";
  }
  getch();
  return 0;
}