//Muhammad Rizky Cavendio - 20051397011

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
// MEMBUAT ARRAY PENSIT
int i;    
char nama[6] = {'P','E','N','S','I','T'};

//MENGUBAH URUTAN HURUF

nama[0]='T';
nama[1]='I';
nama[2]='S';
nama[3]='N';
nama[4]='E';
nama[5]='P';

//MEMUNCULKAN ARRAY YANG DIUBAH URUTANNYA

cout<<"Kata PENSIT \n\n";
cout<<"Menjadi : "<<nama;
return 0;
}
