#include <iostream>
using namespace std;

int main() {
    int n =4;
    char ch = 'A' ;   
    for(int i=0; i<n; i++) { // outer loop row
      
        for(int j=0; j<i+1 ; j++) { // inner loop column
            
            cout << ch ;
            ch++ ;
            
        }
        cout << endl ;
    }
    return 0;
}