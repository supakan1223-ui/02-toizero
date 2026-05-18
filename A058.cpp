#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int dat[1000] = {} ;
    int n ;
    cin >> n ;
    dat[n] ;
    double sum = 0 ;
    for (int a = 0; a < n; a++) {
        cin >> dat[a] ;
        sum += dat[a] ;
    }
    int max = dat[0] ;
    int min = dat[0] ;
    for (int b = 0; b < n; b++) {
        if(max < dat[b])
        max = dat[b] ;
    }
    for (int b = 0; b < n; b++) {
        if(min > dat[b])
        min = dat[b] ;
    }
    double avg = sum / n ;
    cout << sum << endl << max << endl << min << endl ;
    printf("%.1f" , avg) ;
    return 0;
}