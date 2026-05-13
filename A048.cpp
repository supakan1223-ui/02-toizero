#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n ;
    cin >> n ;
    int price = 0 ;
    double ft = (double)(n * 0.5) ;
    while( n > 0 ) 
    {
        if(n > 200)
        {
            price += ( n - 200) * 15 ;
            n = 200 ;
        }
        if ( n > 100 && n <= 200 )
        {
            price += ( n - 100) * 12 ;
            n = 100 ;
        }
        if( n > 50 && n <= 100)
        {
            price += ( n - 50 ) * 10 ;
            n = 50 ;
        }
        if( n > 10 && n <= 50)
        {
            price += ( n - 10 ) * 7 ;
            n = 10 ;
        }
        if( n >= 1 && n <= 10 )
        {
            price += ( n ) * 5 ;
            n = 0 ;
        }
    }
    double vat = (double)(((double)price / 100) * 7) ;
    double result = (double)(price + ft + vat) ;
    printf("%.2f" , result) ;
}  