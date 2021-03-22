//Muhammad Rizky Cavendio - 20051397011
//Linked List NO. 1

#include <iostream>
using namespace std;

struct Polinom
{
int P1[10]={0,6,8,0,5,0,1,0,0,15};
int P2[10]={3,0,4,0,0,3,2,2,0,10};
int P3[10]={0,0,0,0,0,0,0,1,0,5};
int P1s[5]={6,8,5,1,15};
int P3s[2]={1,5};
int P1x[5]={8,7,5,3,0};
int P3x[2]={2,0};
int x;
void tampil1();
void tampil2();
void tampil3();
void tambah();
void kurang();
void kali();
void turunan();
};

void Polinom::tampil2()
{
x=9;for(int i=0; i<10; i++)
{
if(P2[i]!=0)
{
cout<<"("<<P2[i]<<"x^"<<x<<")"<<"+";
}x--;
}
}

void Polinom::tampil1()
{
x=9;for(int i=0; i<10; i++)
{
if(P1[i]!=0){cout<<"("<<P1[i]<<"x^"<<x<<")"<<"+";
}
x--;
}
}

void Polinom::tambah()
{
x=9;int hasil[9];for(int i=0; i<10; i++)
{
hasil[i]=P1[i]+P2[i];if(hasil[i]!=0)
{
cout<<"("<<hasil[i]<<"x^"<<x<<")"<<"+";
}
x--;
}
}

void Polinom::tampil3()
{
x=9;for(int i=0; i<10; i++){if(P3[i]!=0)
{
cout<<"("<<P3[i]<<"x^"<<x<<")"<<"+";
}
x--;
}
}

void Polinom::kali()
{
int hasil[10];
int hasilx[10];
 for(int i=0; i<5; i++)
{
 for(int j=0; j<2; j++)
{
hasil[i]=P1s[i]*P3s[j];
hasilx[i]=P1x[i]+P3x[j];
if(hasil[i]==40||hasil[i]==25)
{
continue;
}
if(hasilx[i]==hasilx[i-1])
{
hasil[i]=hasil[i]+hasil[i-1];
}
cout<<"("<<hasil[i]<<"x^"<<hasilx[i]<<")"<<"+";
}
}
}

void Polinom::kurang()
{
x=9;int hasil[9];
for(int i=0; i<10; i++)
{
hasil[i]=P1[i]-P2[i];
if(hasil[i]!=0)
{
cout<<"("<<hasil[i]<<"x^"<<x<<")"<<"+";}x--;
}
}
void Polinom::turunan()
{
x=9;int hasil[9];
for(int i=0; i<10; i++)
{
hasil[i]=P2[i]*x;if(hasil[i]!=0)
{
cout<<"("<<hasil[i]<<"x^"<<x-1<<")"<<"+";
}
x--;
}
}

int main()
{
Polinom *pol=new Polinom();
cout<<"P1 : ";pol->tampil1();
cout<<"\nP2 : ";
pol->tampil2();
cout<<"\nP3 : ";
pol->tampil3();
cout<<"\n\nPenjumlahan : ";
pol->tambah();
cout<<"\nPengurangan : ";
pol->kurang();
cout<<"\nPerkalian : ";
pol->kali();
cout<<"\nPenurunan : ";
pol->turunan();

return 0;
}


