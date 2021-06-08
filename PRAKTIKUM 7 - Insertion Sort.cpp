//Muhammad Rizky Cavendio - 20051397011

#include <iostream>
using namespace std;
#include <conio.h>
#include <iomanip>

void insertion (int data[])
{
      int temp, j;
      for(int i=1; i<6; i++)
      {
            temp = data[i];
            j = i - 1;
            while(data[j]<temp && j>=0)
            {
                  data[j+1] = data[j];
                  j--;
            }
            data[j+1] = temp;
      }
}

int main()
{
      int data [] = {22,10,15,3,8,2};

      cout<<"INSERTION SORT"<<endl;
      cout<<"=============="<<endl;
      cout<<"\nDATA ->";
      for(int n = 0; n<6;n++)
            cout<<setw(5)<<data[n];

      cout<<endl;

      cout<<"\nDATA SETELAH DIURUTKAN\n";
      cout<<"------------------------\n";

      insertion(data);
     
      for(int x = 0; x<6;x++)
            cout<<setw(5)<<data[x];

      cout<<endl;

      _getche();
      return EXIT_SUCCESS;
}
