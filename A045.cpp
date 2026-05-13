#include<iostream>
#include<string>
using namespace std ;
int main()
{
    int n ;
    cin >> n ;
    if(n >= 0 && n <= 1)
    cout << "35" ;
    else if(n > 1 && n <= 10)
    cout << 35 + ((n - 1) * 5) ;
    else if( n > 10 )
    cout <<  80 + ((n - 10) * 8) ;
}