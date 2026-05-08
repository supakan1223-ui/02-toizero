#include<iostream>
#include<string>
using namespace std;
int main()
{
    int year ;
    cin >> year ;
    if((year % 4 == 0 || year % 400 == 0) && (year % 100 != 0) && year >= 1500)
    cout << "yes" ;
    else if(year % 100 == 0 && year % 400 != 0 && year > 1500 || year < 1500 || year % 4 != 0)
    cout << "no" ;
    else 
    cout << "yes" ;
}