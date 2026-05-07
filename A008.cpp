#include<iostream>
#include<string>
using namespace std;
int main()
{
    string dat;
    cin >> dat;
    if( dat.size() > 13 || dat.size() < 13)
    cout << "no" ;
    else if (dat.size() == 13)
    {
        cout << "yes" ; 
    }
}