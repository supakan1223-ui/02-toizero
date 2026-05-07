#include<iostream>
using namespace std;
int main()
{
    int age ;
    char sta ;
    cin >> age ;
    cin >> sta ;
    if( age < 18 || sta == 's' || sta == 'S')
    cout << "20" ;
    else
    cout << "50" ;
}