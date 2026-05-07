#include<iostream>
#include<string>
using namespace std;
int main()
{
    string id ;
    cin >> id ;
    char one = id[2] ;
    if( one == '1' && char(id[3] == '6') )
    cout << "yes" ;
    else
    cout << "no";
}