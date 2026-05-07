#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name ;
    string sur ;
    string age ;
    cin >> name >> sur >> age ;
    if( name.size() > 5 && sur.size() > 5 )
    cout << name[0] << name [1] << sur[sur.size() - 1 ] << age[age.size() - 1 ] ;
    else
    cout << name[0] << age << sur[sur.size() - 1 ];

}