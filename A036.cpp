#include<iostream>
#include<string>
using namespace std ;
int main()
{
    int n ;
    cin >> n ;
    int result = n;
    while(n > 9)
    {
         n -= 10 ;
    }
    int tue = result - n  ;
    int round = tue / 10 ;
    cout << tue <<" ";
    for(int a = 1 ; a <= round ; a++)
    {
        tue -= 10 ;
        if(tue >= 0)
        cout << tue << " " ;
        else
        break ;
    }
    if(tue > 100)
    cout << " " << "0" ;
}