#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
 
int main()
 
{
 
   char string[25];   
   int pjgstring;     
   cout << "=====================================================" <<endl <<endl;
   cout << "       PROGRAM MEMBALIK KALIMAT DENGAN REKURSI       " <<endl <<endl;
   cout << "=====================================================" <<endl <<endl;
   cout << "Masukkan Kalimat :"; 
   cin  >> string;
   cout << "\n Kalimat Terbalik : ";

   pjgstring = strlen(string) - 1;
   while (pjgstring >= 0)         
   {
    cout << string[pjgstring];
     pjgstring = pjgstring - 1;  
   }
   getch();
}
