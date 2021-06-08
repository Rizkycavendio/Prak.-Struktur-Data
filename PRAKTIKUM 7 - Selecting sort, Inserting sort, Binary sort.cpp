#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int data[50];
int n;

void tukar(int a, int b)
{
int t;
t=data[b];
data[b]=data[a];
data[a]=t;
}

void selectionsort()
{
int pos,i,j;


cout<<"-------------------------------------------------"<<endl;
cout<<"SELECTION SORT ASCENDING"<<endl;
cout<<"-------------------------------------------------"<<endl;
cout<<"INPUTKAN BANYAK DATA = ";
cin>>n;
cout<<"-------------------------------------------------"<<endl;

for(int i=0;i<n;i++)
{
    cout<<"INPUTKAN DATA KE-"<<(i+1)<<" = " ;
    cin>>data[i];
}
    cout<<"-------------------------------------------------"<<endl;
    cout<<"DATA YANG DIINPUTKAN :"<<endl;
   
for(i=0;i<n;i++)
{
cout<<data[i]<<" ";
}
cout<<endl<<"-------------------------------------------------"<<endl;

for(i=0;i<n-1;i++)
{
    pos=i;
    for(j=i+1;j<n;j++)
{
    if(data[j]<data[pos])pos=j;
}
    if(pos!=i) tukar(pos,i);
}

cout<<"DATA YANG TELAH DIURUTKAN SECARA ASCENDING : "<<endl;
for(int i=0;i<n;i++)
{
    cout<<data[i]<<" ";
}
cout<<endl;

cout<<"-------------------------------------------------"<<endl;
cout<<"SELECTION SORT SELESAI !"<<endl;
cout<<"-------------------------------------------------"<<endl;

}
void insertionsort()
{
    int tmp,i,j;
   
    cout<<"-------------------------------------------------"<<endl;
    cout<<"INSERTION SORT ASCENDING"<<endl;
    cout<<"-------------------------------------------------"<<endl;
    cout<<"INPUTKAN BANYAKNYA DATA = ";
    cin>>n;
    cout<<"-------------------------------------------------"<<endl;
   
    for(int i=0;i<n;i++)
    {
        cout<<"INPUTKAN DATA KE-"<<(i+1)<<" = " ;
        cin>>data[i];
    }

    cout<<"-------------------------------------------------"<<endl;
    cout<<"DATA YANG DIINPUTKAN :"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl<<"-------------------------------------------------"<<endl;

    for(i=1;i<n;i++)
    {
        tmp=data[i];
        j=i-1;
        while(data[j]>tmp && j>=0)
        {
            data[j+1]=data[j];
            j--;
        }
        data[j+1]=tmp;
    }

    cout<<"DATA YANG TELAH DIURUTKAN SECARA ASCENDING : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl;

    cout<<"-------------------------------------------------"<<endl;
    cout<<"INSERTION SORT SELESAI !"<<endl;
    cout<<"-------------------------------------------------"<<endl;


}
void binary_search()
{
    int data[50],n,i,j,k,t,low,high,mid,flag;
   
    cout<<"masukkan jumlah data : ";
    cin>>n;
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"masukkan data ke - "<<(i+1)<<" = ";
        cin>>data[i];
    }
   
   
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(data[i]>data[j])
            {
                t=data[i];
                data[i]=data[j];
                data[j]=t;
            }
        }
    }
    cout<<"\nmasukkan data yang ingin dicari : ";
    cin>>k;
   
    flag=0;
    high=n;
    low=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(data[mid]==k)
        {
            flag++;
        }
        if(data[mid]<k)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(flag>0)
    {
        cout<<"data " <<k<<" yang dicari ada"<<endl;
    }
    else
    {
        cout<<"data tidak ditemukan"<<endl;
    }
   
   
}
void sequence_search()
{
    int data[50],index[50];
    int i,j,k,n;
   
    cout<<"masukkan jumlah data : ";
    cin>>n;
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"masukkan data ke - "<<(i+1)<<" = ";
        cin>>data[i];
    }
   
    cout<<"\nmasukkan data yang ingin dicari : ";
    cin>>k;
   
   
    j=0;
   
    for(i=0;i<n;i++)
    {
        if(data[i]==k)
        {
            index[j]=i;
            j++;
        }
    }
   
    if(j>0)
    {
        cout<<"Data "<<k<<"yang dicari ada "<<j<<" buah "<<endl;
        cout<<"data tersebut terdapat dalam index ke : ";
        for(i=0;i<j;i++)
        {
            cout<<index[i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<"data tidak ditemukan "<<endl;
    }
}
main()
{
    int n,z;
    v:
    system("cls");
    cout<<"---------------------------------"<<endl;
    cout<<"|Program sorting dan searching  |"<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"1.selection sort"<<endl;
    cout<<"2.insertion sort"<<endl;
    cout<<"3.binary search"<<endl;
    cout<<"masukkan pilihan (1-3) : ";
    cin>>n;
    if(n==1)
    {
        system("cls");
        selectionsort();
        cout<<"\ningin kembali ke menu? (1/2) : ";
        cin>>z;
        if(z==1)
        {
            goto v;
        }
        else
        {
            goto a;
        }
    }
    else if(n==2)
    {
        system("cls");
        insertionsort();
        cout<<"\ningin kembali ke menu? (1/2) : ";
        cin>>z;
        if(z==1)
        {
            goto v;
        }
        else
        {
            goto a;
        }
    }
    else if(n==3)
    {
        system("cls");
        cout<<"Binary search"<<endl<<endl;
        binary_search();
        cout<<"\ningin kembali ke menu? (1/2) : ";
        cin>>z;
        if(z==1)
        {
            goto v;
        }
        else
        {
            goto a;
        }
    }
    a:
    getch();
}
