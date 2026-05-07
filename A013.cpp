#include<iostream>
#include<string>
using namespace std;
int main()
{
    string digit  ;
    char ch ;
    string pasw = "4567" ;
    cin >> ch >> digit  ;
    for(int pro = 0 ; pro < 5 ; pro++ )
    {
        if( digit[pro] == pasw[pro] && ch == 'H')
        {
            cout << "safe unlocked" ;
            break;
        }
        if( ch == 'H')
        {
            cout << "safe locked - change digit" ;
            break;
        }
        if( digit[pro] == pasw[pro])
        {
            cout << "safe locked - change char" ;
            break;
        }
        else
        {
            cout << "safe locked" ;
            break;
        }
    }
}