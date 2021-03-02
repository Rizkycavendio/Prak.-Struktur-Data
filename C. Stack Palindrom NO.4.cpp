//Muhammad Rizky Cavendio - 20051397011

#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
 
    string kata;
    
    cout << "Masukkan Kata\t: ";
    getline(cin, kata);
   
    string originalKata = kata;
    transform(originalKata.begin(), originalKata.end(), originalKata.begin(), ::tolower);

    string reversedWord = originalKata;
    reverse(reversedWord.begin(), reversedWord.end());

    if(originalKata == reversedWord) {
        cout << "\nKata '" << kata << "' adalah palindrome.\n" << endl;
    } else {
        cout << "\nKata '" << kata << "' bukan palindrome.\n" << endl;
    }
 
    return 0;
}
