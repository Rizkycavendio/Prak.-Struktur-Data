//Muhammad Rizky Cavendio - 20051397011

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream>
#define MaxElemen 200

struct Tumpukan
{
 char Isi[MaxElemen];
   int Atas;
} T;

void PUSH (char x){ 
if(T.Atas == MaxElemen){  
 cout<<"Tumpukan Sudah Penuh";
 getch();
}
else{
 T.Atas = T.Atas + 1;
 T.Isi[T.Atas] = x;
}
}
char POP(){
 char hasil;
 if(T.Atas == 0){
    cout<<"Tumpukan sudah kosong";
      hasil = ' ';
   }
   else{
    hasil = T.Isi[T.Atas];
      T.Atas = T.Atas - 1;
   }
   return hasil;
}
void main ()
{
     int I;       
     char Kalimat[MaxElemen];   
     clrscr();
     T.Atas =0;  
     cout<<"Aplikasi Stack untuk Membalik kalimat\n";
     cout<<"----------------------------------------\n\n";
     cout<<"Masukkan sembarang kalimat : ";gets(Kalimat);

     clrscr();
     cout<<"Kalimat Asli : "<<Kalimat;

     for(I=0;I<strlen(Kalimat);I++)
     {
      PUSH(Kalimat[I]);
      }
      cout<<"\nKalimat Setelah di Balik : ";

      for (I=0;I<strlen(Kalimat);I++)
      {
       cout<<""<<POP();
      }
       getch();
    } 
