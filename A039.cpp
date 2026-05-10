#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n ;
    string dat[50];
    cin >> n;
    int tar = ((n / 5)*5)-1;
    for(int a = 0 ; a < n ; a++)
    {
       dat[a] = "*" ;
    }
    for(int b = 4 ; b <= tar ; b+= 5)
    dat[b] = "X" ;
    for(string c : dat)
    cout << c ;
}