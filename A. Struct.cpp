//Muhammad Rizky Cavendio - 20051397011

#include<iostream>
#include<string>
#include<math.h>
#include<stdlib.h>
#include<iomanip>

using namespace std;
int main()

{
	string kode,koba;
	int jumba,stot[50],jumyar,jumbe;
	float total_,tot;
	cout<<"kode pembeli:";
	cin>>kode;
	
	struct nota{
	string nama;
	string status;
	};

	if (kode=="P001")
	{	
	nota pembeli;
	pembeli.nama="Diana";
	pembeli.status="M";
	cout<<"Nama Pembeli: "<<pembeli.nama<<endl;
	cout<<"Status Pembeli: "<<pembeli.status<<endl;
	}
	
	if (kode=="P002")
	{
	nota pembeli;
	pembeli.nama="Rina";
	pembeli.status="M";
	cout<<"Nama Pembeli: "<<pembeli.nama<<endl;
	cout<<"Status Pembeli: "<<pembeli.status<<endl;
	}
	if (kode=="P003")
	{
	nota pembeli;
	pembeli.nama="Lina";
	pembeli.status="BM";
	cout<<"Nama Pembeli: "<<pembeli.nama<<endl;
	cout<<"Status Pembeli: "<<pembeli.status<<endl;
	}
	if (kode=="P004")
	{
	nota pembeli;
	pembeli.nama="Doni";
	pembeli.status="BM";
	cout<<"Nama Pembeli: "<<pembeli.nama<<endl;
	cout<<"Status Pembeli: "<<pembeli.status<<endl;
	}
	if (kode=="P005")
	{
	nota pembeli;
	pembeli.nama="Dodi";
	pembeli.status="M";
	cout<<"Nama Pembeli: "<<pembeli.nama<<endl;
	cout<<"Status Pembeli: "<<pembeli.status<<endl;
	}
	cout<<"\nmasukkan jumlah jenis barang: ";cin>>jumbe;
	for(int i=0;i<jumbe;i++){
	
	cout<<"\n\nKode Barang:";
	cin>>koba;
	struct notab{
	string nama;
	int harga;
	};
	
	if (koba=="BRG001")
	{
	notab barang;
	barang.nama="Pensil";
	barang.harga=2000;
	
	cout<<"Nama Barang: "<<barang.nama<<endl;
	cout<<"Harga Barang: "<<barang.harga<<endl;
	
	cout<<"Jumlah Barang: ";
	cin>>jumba;
	
	stot[i]=jumba*barang.harga;
	cout<<"Sub Total: "<<stot[i];	
	if(jumba>=3){
		cout<<"\nPembelian diatas 3 pcs mendapat potongan harga Rp. 300";
		stot[i]=stot[i]-300;
		cout<<"\nTotal: "<<stot[i]<<endl;	
		}
	
	
		}		
		
	if (koba=="BRG002")
	{
	notab barang;
	barang.nama="Buku Tulis";
	barang.harga=3500;
	
	cout<<"Nama Barang: "<<barang.nama<<endl;
	cout<<"Harga Barang: "<<barang.harga<<endl;
	
	cout<<"Jumlah Barang: ";
	cin>>jumba;
	stot[i]=jumba*barang.harga;
	cout<<"Sub Total: "<<stot[i];
	if(jumba>=3){
		cout<<"\nPembelian diatas 3 pcs mendapat potongan harga Rp. 300";
		stot[i]=stot[i]-300;
		cout<<"\nTotal: "<<stot[i]<<endl;	
		}
	}
		
		
	if (koba=="BRG003")
	{
	notab barang;
	barang.nama="Penghapus";
	barang.harga=1000;
	
	cout<<"Nama Barang: "<<barang.nama<<endl;
	cout<<"Harga Barang: "<<barang.harga<<endl;
	cout<<"Jumlah Barang: ";
	cin>>jumba;
	stot[i]=jumba*barang.harga;	
	cout<<"Sub Total: "<<stot[i];
	if(jumba>=3){
		cout<<"\nPembelian diatas 3 pcs mendapat potongan harga Rp. 300";
		stot[i]=stot[i]-300;
		cout<<"\nTotal: "<<stot[i]<<endl;	
		}
	
		}		
		
	if (koba=="BRG004")
	{
	notab barang;
	barang.nama="Penggaris";
	barang.harga=1500;
	
	cout<<"Nama Barang: "<<barang.nama<<endl;
	cout<<"Harga Barang: "<<barang.harga<<endl;
	cout<<"Jumlah Barang: ";
	cin>>jumba;
	stot[i]=jumba*barang.harga;	
	cout<<"Sub Total: "<<stot[i];
	if(jumba>=3){
		cout<<"\nPembelian diatas 3 pcs mendapat potongan harga Rp. 300";
		stot[i]=stot[i]-300;
		cout<<"\nTotal: "<<stot[i]<<endl;	
		}
	
		}		
		
	if (koba=="BRG005")
	{
	notab barang;
	barang.nama="Ballpoint";
	barang.harga=2500;
	
	cout<<"Nama Barang: "<<barang.nama<<endl;
	cout<<"Harga Barang: "<<barang.harga<<endl;
	cout<<"Jumlah Barang: ";
	cin>>jumba;
	stot[i]=jumba*barang.harga;	
	cout<<"Sub Total: "<<stot[i];
	if(jumba>=3){
		cout<<"\nPembelian diatas 3 pcs mendapat potongan harga Rp. 300";
		stot[i]=stot[i]-300;
		cout<<"\nTotal: "<<stot[i]<<endl;	
		}
	
		}
		tot+=stot[i];
}
		cout<<"\n\nTotal Pembelian: "<<tot<<endl;
		if (kode=="P001"){
		cout<<"\nDiskon: 10%";
		total_=tot*90/100;
		cout<<"\nTotal: "<<total_<<endl;
	
		}	
	if (kode=="P002"){
		cout<<"\nDiskon: 10%";
		total_=tot*90/100;
		cout<<"\nTotal: "<<total_<<endl;
		
		}
	
	if (kode=="P005"){
		cout<<"\nDiskon: 10%";
		total_=tot*90/100;
		cout<<"\nTotal: "<<total_<<endl;
		
		}
	cout<<"\nJumlah Bayar: ";
		cin>>jumyar;
		cout<<"Kembali: "<<jumyar-total_;
		cout<<endl<<endl;
		cout<<endl;
		
		system ("cls");
		cout<<"TOKO INDO APRIL ";
		cout<<"JL.DI Panjaitan ";
		cout<<"\n\n";
   cout<<"======================================"<<endl;
   cout<<"Nama          Harga      Jumlah       "<<endl;
   cout<<"Barang        satuan     Beli         "<<endl;
   cout<<"======================================"<<endl;
   for(int i=0;i<t.jumyar-total_;i++)
    {tampil(i);}
     cout<<"======================================"<<endl;
     cout<<"SubTotal    : Rp. "<<subtotal()<<endl;
     cout<<"Diskon      : Rp. "<<diskon()<<endl;
     cout<<"Grand Total : Rp. "<<grand()<<endl;
     cout<<"======================================";
     cout<<"Bayar       : Rp. "; cin>>jumyar;
     cout<<"\n";
     cout<<"Kembalian   : Rp. "<<jumyar-total_()<<endl;
     cout<<"\n";
     cout<<"\n";
     cout<<"Data Pembeli \n";
     cout<<"Kode Pembeli : "<<kode;
     cout<<"Nama Pembeli : "<<pembeli.nama;
     cout<<"Status       : "<<pembeli.status;

   getch();
		
	
	
		
	}
