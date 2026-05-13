#include<iostream>
using namespace std ;
int main()
{
    int n ;
    cin >> n ;
    int dat[n] ;
    int sum = 0;
    int even = 0 ;
    int odd = 0 ;
    for(int &in : dat)
    cin >> in ;
    for(int a : dat)
    {
        sum += a ;
        if( a % 2 == 0)
        even += 1 ;
        else
        odd += 1 ;
    }
    cout << "SUM " << sum << endl << "EVEN " << even << endl << "ODD " << odd ;
}