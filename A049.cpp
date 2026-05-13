#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
    string raw ;
    cin >> raw ;
    int dat[5] ;
    for(int a = 0 ; a < 5 ; a++ )
    {
        dat[a] = raw[a] - '0' ;
    }
    int floor = 0 ;
    if(dat[0] > 5)
        floor += 9 ;
    else if (dat[1] > 5)
        floor += 10 ;
    else if (dat[2] > 5)
        floor += 11 ;
    else if (dat[3] > 5)
        floor += 12 ;
    else if (dat[4] > 5)
        floor += 14 ;
    else
        floor += 13 ;
    bool check = true ;
    for(int chk = 0 ; chk < 5 ; chk += 1 )
    {
        int first = dat[chk];
        int last = dat[5-1-chk] ;
        if(first != last)
        {
            check = false ;
            break ;
        }
    }
    int numro[2] = {0,0};
    if(check == true)
    {
        int one = dat[0] + dat[4] ;
        int two = dat[1] * dat[3] ;
        if( one > 5 )
            numro[0] += 1 ;
        else if (two > 5)
            numro[0] += 2 ;
        else
            numro[0] += 0 ;
    }
    else if(check == false)
    {
        int one = (dat[4] != 0) ? (dat[0] / dat[4]) : 0;
        int two = dat[1] - dat[4] ;
        if( one > 5 )
            numro[0] += 1 ;
        else if ( two > 5 )
            numro[0] += 2 ;
        else
            numro[0] += 0 ;
    }
    int sump = 0 ;
    int sumx = 1 ;
    for(int a : dat)
    {
        sump += a ;
        sumx *= a ;
    }
    if( sump > 25 )
        numro[1] += 1 ;
    else if ( sumx > 55 )
        numro[1] += 2 ;
    else
        numro[1] += 0 ;
    cout << floor << numro[0] << numro[1] ;
}