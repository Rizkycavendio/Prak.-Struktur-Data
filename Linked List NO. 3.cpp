//Muhamad Rizky Cavendio - 20051397011
//Struktur Data - Linked List NO. 3
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <constream.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

using namespace std;

struct mhsiswa
{
 char nrp[8],nama[20];
 char alamat;
 int umur;
 float ipk;
};

struct simpul
{
 char nrp[8],nama[20];
 char alamat;
 float ipk;
 struct simpul *berikut;
};

struct simpul *awal = NULL, *akhir = NULL;
struct mhsiswa mhs;

void tambah_list_dibelakang(struct mhsiswa info);
void isi_list();
void tampil_list();
void hapus_list();

void main()
{
 clrscr();
 isi_list();
 clrscr();
 tampil_list();
 hapus_list();
 getch();
}

void menu()
{
 int pil;
 clrscr();
 cout<<"Pilih Menu  : "<<endl;
 cout<<"            1. Isi List"<<endl;
 cout<<"            2. Tampil List"<<endl;
 cout<<"            3. Hapus List"<<endl;
 cout<<"            4. Exit"<<endl<<endl;
 cout<<"Tentukan Pilihan : ";
 cin>>pil;
 switch (pil)
 {
  case 1:
       isi_list();
       break;
  case 2:
       tampil_list();
       break;
  case 3:
       hapus_list();
       break;
  case 4:
       clrscr();
       gotoxy(21,13);cout<<"Terima Kasih";
       break;
 }
}

void isi_list()
{
 char jawab;

 do
 {
  clrscr();
  cout<<"NRP   : ";cin>>mhs.nrp;
  cout<<"Nama  : ";cin>>mhs.nama;
  cout<<"Alamat: ";cin>>mhs.alamat;
  cout<<"IPK   : ";cin>>mhs.ipk;
  tambah_list_dibelakang(mhs);
  cout<<"\nTambah Data [Y/T]? : ";
  cin>>jawab;

 }
 while (toupper(jawab) != 'T');
}

void tampil_list()
{
 struct simpul *baca;
 int i;

 baca = awal;
 i = 1;

 while (baca != NULL)
 {
  cout<<"Data Ke : "<<i<<endl;
  cout<<"NRP     : "<<baca -> nrp<<endl;
  cout<<"Nama    : "<<baca -> nama<<endl;
  cout<<"Alamat  : "<<baca -> alamat<<endl;
  cout<<"IPK     : "<<baca -> ipk<<endl;
  cout<<endl;
  i++;
  baca = baca -> berikut;
 }
}

void hapus_list()
{
 struct simpul *hapus;

 hapus = awal;
 while (hapus != NULL)
 {
  awal = hapus -> berikut;
  free (hapus);
  hapus = awal;
 }
}

int main()
  {
    int i, n, data[50];
    float rata,jum;
    
    cout<<"Banyaknya Data = ";
    cin>>n;
    cout<<endl;
    
    for (i=0; i<n; i++)
        {
           cout<<"Data ke-"<<i+1<<" = ";
           cin>>data[i];
           jum += data[i];
        }
        
    rata=jum/n;
        
    cout<<endl;
    cout<<"Nilai Total = "<<jum<<endl;
    cout<<"Nilai Rata-rata = "<<rata<<endl;
  getch();
  }
 

