#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    int dat1[3] = {} ;
    int dat2[3] = {} ;
    for (int a = 0; a < 3; a++) {
        cin >> dat1[a] ;
    }
    for (int b = 0; b < 3; b++) {
        cin >> dat2[b] ;
    }
    double d = sqrt(pow((dat1[0]-dat2[0]) , 2) + pow((dat1[1]-dat2[1]) , 2) + pow((dat1[2]-dat2[2]) , 2)) ;
    cout << fixed << setprecision(2) << d ;
    return 0;
}