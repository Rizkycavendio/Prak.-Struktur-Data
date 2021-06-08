#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

struct Biodata
{
char Nip[9];
char Nama[25];
char Alamat[100];
char Golongan[2];
};
main()
{
Biodata Pegawai[5];
int i;

for(i=0; i<3; i++)
{
system("CLS");
system("COLOR F0");
cout<<"\t\t\t Program Pendataan Karyawan "<<endl;
cout<<"\n \t\t=============================================\n";
cout<<"\t\tNIP\t: ";cin>>Pegawai[i].Nip;
cout<<"\t\tNama\t: ";cin>>Pegawai[i].Nama;
cout<<"\t\tAlamat\t:";cin>>Pegawai[i].Alamat;
cout<<"\t\tGolongan\t:";cin>>Pegawai[i].Golongan;
}
cout<<"Cetak"<<endl;
for(i=0; i<3; i++)
{
cout<<"==============================================================\n";
cout<<"\n NIP \t\t: "<<Pegawai[i].Nip;
cout<<"\n Nama \t\t: "<<Pegawai[i].Nama;
cout<<"\n Alamat \t: "<<Pegawai[i].Alamat;
cout<<"\n Golongan \t:"<<Pegawai[i].Golongan;
cout<<endl;
cout<<"==============================================================\n";
}
getch();
}
