#include <iostream>
using namespace std;

int main() {
    int n =4;
    
    for(int i=0; i<n; i++) { // outer loop row
        for(int j=0; j<=i; j++) { // inner loop column
            cout <<  "*" ;
            
        }
        cout << endl ;
    }
    return 0;
}