#include<iostream>
using namespace std;
int main()
{
    int dat1 , dat2;
    cin >> dat1;
    cin >> dat2 ;
    int sum = dat1 + dat2 ;
    cout << sum << endl;
    if(sum < 50 || sum > 100 || dat1 > 50 || dat2 > 50 )
    cout << "fail" ;
    else if ( sum >= 50 )
    cout << "pass" ;
}