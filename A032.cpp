#include<iostream>
#include<string>
using namespace std ;
int main()
{
    int n ;
    cin >> n ;
    for(int in = 1 ; in <= n ; in++)
    cout << "*" ;
    int ifo = n - 2 ;
    int ift = n - 4 ;
    if(ifo >= 1)
    {
        cout << endl ;
        for(int in = 1 ; in <= n -  2 ; in++)
        cout << "*" ;
        cout << endl ;
    }
    else{}
    if(ift >= 1)
    {
        for(int in = 1 ; in <= n - 4 ; in++)
        cout << "*" ;
    }
    else{}
}