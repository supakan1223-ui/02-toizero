#include<iostream>
#include<string>
using namespace std ;
int main()
{
    int n ;
    cin >> n ;
    int result =  0 ;
    for(int a = 1 ;  a <= n  ; a++)
    {
        result  +=  a*a ;
    }
    cout  << result  ;
}