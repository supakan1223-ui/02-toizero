#include<iostream>
#include<string>
using namespace std;
int main()
{
    string inpt  ;
    int count = 0 ;
    cin >> inpt ;
    for(int out = 0 ; out < 3 ; out ++)
    {
        if (inpt[out] == 'a'||inpt[out] == 'e'|| inpt[out] == 'i'|| inpt[out] == 'o'|| inpt[out] == 'u' )
        count += 1 ;
    }
    cout  << count ;
}