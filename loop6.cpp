#include <iostream>
using namespace std;

int main() {
    int n =4;
   
    for(int i=0; i<n; i++) { // outer loop row
        char ch='A' + (i+1)-1;
        for(int j=0; j<i+1; j++) { // inner loop column
            
            cout << ch;
            
        }
        cout << endl ;
    }
    return 0;
}