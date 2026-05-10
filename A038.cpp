#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
int main()
{
    int n ;
    cin >> n ;
    int result = 1 ;
    for(int a = 1 ; a <= n ; a++)
    {
        result *= a ;
    }
    cout << result ;
}