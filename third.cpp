#include <iostream>
using namespace std;

int main() {
    float p,t,r,s;

    cout << "Enter principle" ;
    cin >> p;

    cout << "Enter rate" ;
    cin >> r;

    cout << "Enter time" ;
    cin >> t;

    s= (p*t*r)/100;

    cout << "Simple interest : " << s << endl;

    return 0;
// this is just mt practice session going on 
}