#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
int main()
{
    int in ;
    cin >> in ;
    string i = "I" ;
    string v = "V" ;
    string x = "X" ;
    string l = "L" ;
    string c = "C" ;
    string d = "D" ;
    string m = "M" ;
    while( in >= 1000)
    {
        in -= 1000;
        cout << m ;
    }
    while( in >= 500)
    {
        if(in >= 900 )
        {
            in -= 900 ;
            cout << c << m ;
        }
        else
        {in -= 500;
        cout << d ;}
    }
    while( in >= 100 )
    {
        if(in >= 400 )
        {
            in -= 400 ;
            cout << c << d ;
        }
        else
        {in -= 100;
        cout << c ;}
    }
    while( in >= 50)
    {
        if(in >= 90 )
        {
            in -= 90 ;
            cout << x << c ;
        }
        else
        {in -= 50;
        cout << l ;}
    }
    while (in >= 10)
    {
        if(in >= 40 )
        {
            in -= 40 ;
            cout << x << l ;
        }
        else
        {in -= 10;
        cout << x ;}
    }
    while( in >= 5)
    {
        if(in >= 9 )
        {
            in -= 9 ;
            cout << i << x ;
        }
        else
        {in -= 5;
        cout << v ;}
    }
    while(in >= 1)
    {
        if(in == 4 )
        {
            in -= 4 ;
            cout << i << v ;
        }
        else 
        {
            in -= 1 ;
            cout << i ;
        }
    }
}