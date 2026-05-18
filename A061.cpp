#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int dat[3] = {} ;
    for (int a = 0; a < 3; a++) {
        cin >> dat[a] ;
    }
    int x = pow(dat[1] , 2) + pow(dat[2] , 2) ;
    if(pow(dat[0] , 2) == x)
    cout << "ON" ;
    else if (pow(dat[0] , 2) > x)
    cout << "IN" ;
    else if (pow(dat[0] , 2) < x)
    cout << "OUT" ;
    return 0;
}