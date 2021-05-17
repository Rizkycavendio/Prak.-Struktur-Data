//Muhammad Rizky Cavendio - 20051397011

#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <alloc.h>

int pil;
void pilih();
void buat_baru();
void tambah_belakang();
void tambah_depan();
void hapus_belakang();
void hapus_depan();
void tampil();


struct simpul
{
    char judul [36], nama [36], penerbit [36];

    struct simpul *kiri, *kanan;
} mhs, *baru, *awal=NULL, *akhir=NULL,*hapus,*bantu;

int main()
{
    do
    {
        clrscr();
        cout<<"MENU DOUBLE LINKEDLIST"<<endl;
        cout<<"1. Tambah Depan"<<endl;
        cout<<"2. Tambah Belakang"<<endl;
        cout<<"3. Hapus Depan"<<endl;
        cout<<"4. Hapus Belakang"<<endl;
        cout<<"5. Tampilkan"<<endl;
        cout<<"6. Selesai"<<endl;
        cout<<"Pilihan Anda : ";
        cin>>pil;
        pilih();
    } while(pil!=6);
    return 0;
}

void pilih()
{
    if(pil==1)
        tambah_depan();
    else if(pil==2)
        tambah_belakang();
    else if(pil==3)
        hapus_depan();
     else if(pil==4)
        hapus_belakang();
      else if(pil==5)
        tampil();
    else
        cout<<"selesai";
}

void buat_baru()
{
    baru=(simpul*)malloc(sizeof(struct simpul));
    cout<<"input Judul Buku    : ";cin>>baru->judul;
    cout<<"input Nama          : ";cin>>baru->nama;
    cout<<"input Penerbit Buku : ";cin>>baru->penerbit;
    baru->kiri=NULL;
    baru->kanan=NULL;
}

void tambah_belakang()
{
    buat_baru();
    if(awal==NULL)
    {
        awal=baru;
        akhir=baru;
    }
    else
    {
        akhir->kanan=baru;
        baru->kiri=akhir;
        akhir=baru;
    }
    cout<<endl<<endl;
    tampil();
}

void tambah_depan()
{
    buat_baru();
    if(awal==NULL)
    {
        awal=baru;
        akhir=baru;
    }
    else
    {
        baru->kanan=awal;
        awal->kiri=baru;
        awal=baru;
    }
    cout<<endl<<endl;
    tampil();
}

void hapus_depan()
{
    if (awal==NULL)
        cout<<"Kosong";
    else if (awal->kanan==NULL)
    {
      hapus=awal;
      awal=NULL;
      akhir=NULL;
      free(hapus);
    }
    else
    {
        hapus=awal;
        awal=hapus->kanan;
        awal->kiri=NULL;
        free(hapus);
    }
    cout<<endl<<endl;
    tampil();
}

void hapus_belakang()
{
    if (awal==NULL)
        cout<<"Kosong";
    else if (awal->kanan==NULL)
    {
      hapus=awal;
      awal=NULL;
      akhir=NULL;
      free(hapus);
    }
    else
    {
     hapus=akhir;
     akhir=hapus->kiri;
     akhir->kanan=NULL;
     free(hapus);
    }
    cout<<endl<<endl;
    tampil();
}

void tampil()
{
     if (awal==NULL)
          cout<<"Kosong";
     else
     {
         bantu=awal;
         while(bantu!=NULL)
         {
            cout<<"====================   ";
            cout<<" Perpustakaan UNESA    ";
            COUT<<"====================   ";
            cout<<"Judul Buku    : "<<bantu->judul;
            cout<<"Nama          : "<<bantu->nama;
            cout<<"Penerbit Buku : "<<bantu->penerbit<<endl;
        
            bantu=bantu->kanan;
         }
     }
     getch();
}