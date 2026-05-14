#include <iostream>
using namespace std;
int main() {
    int col1[3] ;
    int col2[3] ;
    int find1 = 0 ;
    int find2 = 0 ;
    int result[3] = {0,0,0} ;
    for (int a = 0; a < 3; a++) {
        cin >> col1[a] ;
    }
    for (int a = 0; a < 3; a++) {
        cin >> col2[a] ;
    }
    for (int b = 0; b < 3; b++) {
        if(col1[b] == col2[b] && (col1[b] > 0 && col2[b] > 0))
        {find1 = 0 ;
          find2 = 0 ;
          find1 += col1[b] ;
          find2 += col2[b] ;
          result[b] += (find1 + find2)/2 ;
        }
        if(col1[b] > 0 && col1[b] != col2[b])
        {find1 = 0 ;
          find2 = 0 ;
          find1 += col1[b] ;
        find2 += col2[b] ;
        result[b] += (find1+find2)/2 ;}
        else if(col2[b] > 0 && col1[b] != col2[b])
        {find1 = 0 ;
          find2 = 0 ;
          find2 += col2[b] ;
        find1 += col1[b];
        result[b] += (find2+find1)/2;}
    }
    for(int a : result)
    cout << a << " ";
    return 0;
}