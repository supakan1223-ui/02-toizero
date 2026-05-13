#include<iostream>
using namespace std ;
int main()
{
    int h , g;
    cin >> h >> g ;
    int l  = (h*g)/60 ;
    int b = (h*g)%60 ;
    if ( l == 0 && b > 0)
    cout << b << " minutes" ;
    else if (l == 0 && b == 0)
    cout << "No teaching";
    else if( b == 0)
    cout << l << " hours " ;
    else if( b > 0)
    cout << l << " hours " << b  << " minutes" ;
    
}