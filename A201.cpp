#include <iostream>
using namespace std;
int main() {
    int laser[2] ;
    for (int a = 0; a < 2; a++) {
        cin >> laser[a] ;
    }
    int redco[laser[0]] ;
    int blueco[laser[1]] ;
    for (int a = 0; a < laser[0] ; a++) {
        cin >> redco[a] ;
    }
    for (int a = 0; a < laser[1]; a++) {
        cin >> blueco[a] ;
    }
    int cut = 0 ;
    for (int a = 0; a < laser[0] ; a++) {
       for (int b = 0; b < laser[1]; b++) {
           if(redco[a] < blueco[b] && redco[a+1] > blueco[b+1])
           cut+=1 ;
       }
    }
    cout << cut ;
    return 0;
}