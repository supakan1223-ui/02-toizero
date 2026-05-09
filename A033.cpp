#include<iostream>
#include<string>
using namespace std ;
int main()
{
    int n ;
    cin >> n ;
    string dat[100] ;
    int sala = 0 ;
    for(int in = 1 ; in <= n ; in++)
    {
        cin >> dat[in] ;
        if(dat[in] == "A" ||dat[in] == "E" ||dat[in] == "I" ||dat[in] == "O" ||dat[in] == "U")
        sala += 1 ;
    }
    cout <<  sala ;
}