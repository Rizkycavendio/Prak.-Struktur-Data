//Muhammad Rizky Cavendio - 20051397011

#include <iostream>
using namespace std;
#include <iomanip>
#include <conio.h>

void SelectionSort(int Array[], const int Size)
{
      int i, j, kecil,temp;
      for(i=0; i<Size;i++)
      {
            kecil = i;
            for(j=i+1; j<Size; j++ )
            {
                  if (Array[kecil]>Array[j])
                  {
                        kecil = j;
                  }
            }
            temp = Array[i];
            Array[i] = Array[kecil];
            Array[kecil] = temp;
      }
}
int main()
{
      int NumList[8] = {5,34,32,25,75,42,22,2};
     
      cout<<"\t================================"<<endl;
      cout<<"\tPENGURUTAN DENGAN SELECTION SORT"<<endl;
      cout<<"\t================================"<<endl;
      cout<<"Data Sebelum diurutkan : \n";
      for(int d = 0; d <8; d++)
      {
            cout<<setw(3)<<NumList[d];
      }
      cout<<"\n\n";
      SelectionSort(NumList, 8);
     
      cout<<"Data setelah diurutkan : \n";
      for(int iii = 0; iii<8; iii++)
            cout<<setw(3)<<NumList[iii]<<endl<<endl;
           
    _getch();
      return EXIT_SUCCESS;
}
