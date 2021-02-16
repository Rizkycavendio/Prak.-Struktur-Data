//Muhammad Rizky Cavendio - Struktrur Data

#include <stdio.h>
 int main(){

 int a[5][5];
 int i,j,x,y,det,hasil;

 printf("masukkan jumlah kolom matriks : ");scanf("%d",&x);
 printf("masukkan jumlah baris matriks : ");scanf("%d",&y);

 for (i=0;i<2;i++){
 for (j=0;j<2;j++){

 printf("masukkan elemen %d %d : ",i+1,j+1);scanf("%d",&a[i][j]);

 }
 }

 for (i=0;i<2;i++){
 for (j=0;j<2;j++){

   printf("%d ",a[i][j]);
 }
   printf("\n ");
 }

det = (a[1][1]*a[2][2]-a[2][1]*a[1][2]);
while(hasil !=0)
 hasil = 1/det;

  a[1][1] = hasil*a[2][2];
  a[1][2] = hasil*a[2][1];
  a[2][1] = hasil*a[1][2];
  a[1][2] = hasil*a[1][1];


  printf("invers matriks \n");
  for (i=0;i<2;i++){
  for (j=0;j<2;j++){

   printf("%d ",a[i][j]);
 }

   printf("\n ");
 }

 }
