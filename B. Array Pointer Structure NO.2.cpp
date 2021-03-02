// Tugas Praktek Struktur Data
// Muhammad Rizky Cavendio - 20051397011


#include <iostream> 
#include <conio.h> 
#include <studio.h>
#include <stdlib.h>

using namespace std;

void main ()
{
	int P1[10] = {0,6,8,0,5,0,1,0,0,15};
	int P2[10] = {10,0,2,2,3,0,0,4,0,3};
	int P3[10] = {5,0,1,0,0,0,0,0,0,0};
}
 float kurang(int A[], int B[], int x)
{
         float hasil=0;
  for(int i=0; i<10; i++) 
        hasil+=(A[i]-B[i])*(float)pow(x,i);
        return hasil;
}
float kali(int A[], int B[], int x)
{
float hasil=0;
for(int i=0; i<10; i++) 
for(int j=0; j<10; j++)
hasil+=(A[i]*B[j])*(float)pow(x,(i+j));
return hasil;
}
float turun(int A[], int x)
{
float hasil=0; 
for(int i=1; i<10; i++) 
hasil+=(A[i]*i)*(float)pow(x,i-1);
return hasil;
}
float tambah (int P1[], int P[2], int x)
{
float hasil=1.0;
for(int i=0; i<10; i++)
hasil+=(P[i]+P2[i])*pow(x,i);

return hasil;
}
