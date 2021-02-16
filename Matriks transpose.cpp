//Muhammad Rizky Cavendio - Tugas Struktur Data

#include <iostream>
using namespace std;
int main ()
{
	int i,j,m,n,matriks[50][50],transpose[50][50];
	cout<<"Masukkan Jumlah Baris : ";
	cin>>m;
	cout<<"Masukkan Jumlah Kolom : ";
	cin>>n;
	cout<<"Masukkan Elemen Matriks : ";
	for (i=0;i<m;i++)
	{
	for (j=0;j<n;j++)
	{
	cin>>matriks[i][j];
	}	
	}
	for (i=0;i<m;i++)
	{
	for (j=0;j<m;j++)
	{
	transpose[j][i]=matriks[i][j];
	}	
	}
	cout<<"Hasil Transpose Matriks : \n";
	for (i=0;i<n;i++)
	{
	for(j=0;j<m;j++)
	{
	cout<<transpose[i][i]<<"\t";
	}
	cout<<endl;
	}
}
