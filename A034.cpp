#include<iostream>
#include<string>
using namespace std ;
int main()
{
    int n ;
    cin >> n ;
    int dat[100] ;
    for(int in = 0 ; in < n ; in++)
    {
        cin >> dat[in] ;
    }
    int sala = dat[0] ;
    for(int in = 0 ; in < n ; in++)
    {
        if(dat[in] < sala)
        {
            sala = dat[in] ;
        }
    }
    cout << sala ;
}