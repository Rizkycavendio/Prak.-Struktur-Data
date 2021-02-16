//Muhammad Rizky Cavendio - Struktur Data

#include <iostream>
 #include <conio.h>
 using namespace std;
  int main(void)
  {
   double a[10][10],b[10][10],c[10][10];
     int CC,i,j,k;

   cout<<endl<<"  Matriks A "<<endl;
   for (i=1; i<=2;i++){    
   for (j=1;j<=2;j++){      
   cout<<"  Nilai Matriks A baris ke-"<<i<<" kolom ke-"<<j<<": ";        
   cin>>a[i][j];    
   }
   }
   cout<<endl<<"  Matriks B "<<endl;
   for (i=1; i<=2;i++){    
   for (j=1;j<=2;j++){        
   cout<<"  Nilai Matriks B baris ke-"<<i<<" kolom ke-"<<j<<": ";        
   cin>>b[i][j];    
   }
   }
   cout<<endl;
   for (i=1;i<=2;i++){    
   for (j=1;j<=2;j++){        
   c[i][j]=0;        
   for (k=1;k<=2;k++){            
   CC=a[i][k]*b[k][j];            
   c[i][j]=c[i][j]+CC;        
   }    
   }
   }
   cout<<"  Hasil Perkalian Matriks A dan B : "<<endl;
   for (i=1;i<=2;i++){    
   for (j=1;j<=2;j++){        
   cout<<"    "<<c[i][j];    
   }  
   cout<<endl;
   }
   getch();
    }
