#include<iostream>
#include<string>
using namespace std;
int main()
{
    int year , car ;
    cin >> year >> car ;
    if( year <= 1990 )
    {
        if( car <= 1500)
        cout << "1250" ;
        else if ( car > 1500 && car <= 2000)
        cout << "1400" ;
        else if(car > 2000)
        cout << "2000" ;
    }
    if( year >= 1991 && year <= 1999 )
    {
        if( car <= 1500)
        cout << "1100" ;
        else if ( car > 1500 && car <= 2000)
        cout << "1300" ;
        else if(car > 2000)
        cout << "1700" ;
    }
    if( year > 2000 )
    {
        if( car <= 1500)
        cout << "1000" ;
        else if ( car > 1500 && car <= 2000)
        cout << "1200" ;
        else if(car > 2000)
        cout << "1500" ;
    }
}