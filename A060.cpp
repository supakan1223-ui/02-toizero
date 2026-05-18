#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    double dat[3] ;
    double w ;
    double l ;
    for (int a = 0; a < 3; a++) {
        cin >> dat[a] ;
    }
    w = dat[1] + (dat[0] * 2) ;
    l = (2*3.14*dat[0]) + dat[2] ;
    printf("%.2f" , w) ;
    printf(" ") ;
    printf("%.2f" , l ) ;
    return 0;
}