#include <iostream>
using namespace std;

int main() {
    int n =3;
    int num = 1;
    for(int i=0; i<n; i++) { // outer loop row
        for(int j=0; j<n; j++) { // inner loop column
            cout <<  num ;
            num = num + 1 ;
        }
        cout << endl ;
    }
    return 0;
}