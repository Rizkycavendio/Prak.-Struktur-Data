//Muhammad Rizky Cavendio - 20051397011

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
 
int main()
{
   char string[25];   
   int totstring;     
   cout << "=====================================================\n\n"; 
   cout << "       PROGRAM MEMBALIK KALIMAT DENGAN REKURSI       \n\n";
   cout << "=====================================================\n\n";
   cout << "Masukkan Kalimat :"; 
   cin  >> string;
   cout << "Kalimat Terbalik : \n";

   totstring = strlen(string) - 1;
   while (totstring >= 0)         
   {
    cout << string[totstring];
     totstring = totstring - 1;  
   }
   getch();
}
