#include <iostream>
#include <string>
using namespace std;
int main() {
    string dat[2] ={};
    int w ;
    for (int a = 0; a < 2; a++) {
        cin >> dat[a] ;
    }
    cin >> w ;
    if(dat[0] == "BKK" && dat[1] == "CNX")
    cout << 10 + (w * 30) ;
    else if(dat[0] == "CNX" && dat[1] == "UBP")
    cout << 15 + (w * 40) ;
    else if(dat[0] == "UBP" && dat[1] == "BKK")
    cout << 20 + (w * 40) ;
    else if(dat[0] == "BKK" && dat[1] == "PKT")
    cout << 25 + (w * 50) ;
    else if(dat[0] == "PKT" && dat[1] == "CNX")
    cout << 30 + (w * 60) ;
    else if(dat[0] == "UBP" && dat[1] == "PKT")
    cout << 40 + (w * 70) ;
    else 
    cout << "Error" ;
    return 0;
}