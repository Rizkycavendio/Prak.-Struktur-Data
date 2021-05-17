#include <iostream>
using namespace std;

int main(){
	
 int n;
 cout<<"Masukkan Angka yang akan dicek apakah bilangan Prima/Bukan: ";cin>>n;

  int prima = 1;
  for(int i=2; i<n; i++){
  if(n%i==0)
  prima=0;
}
   if (prima){
   cout<<n<<" Adalah bilangan prima \n";
}
   else{
   cout<<n<<" Bukan bilangan prima \m";
}
return 0;
}
