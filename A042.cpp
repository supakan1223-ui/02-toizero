#include<iostream>
#include<string>
using namespace std ;
int abs(int n)
{
    if(n < 0)
    return -n ;
    return n ;
}
void chk(char &n , int &x , int &y)
{
    if(n == 'N')
    (y+=1) ;
    else if (n == 'S')
    (y-=1) ;
    else if (n == 'E')
    (x+=1) ;
    else if (n == 'W')
    (x-=1) ;
}
int main ()
{
    string in ;
    cin >> in ;
    int x = 0 ;
    int y = 0 ;
    for(int w = 0 ; w < in.size() ; w++)
    {
        chk(in[w] , x , y) ;
    }
    cout << x << " " << y <<" " << ( abs(0 - x ) + abs(0 - y));
}