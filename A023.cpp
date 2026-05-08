#include<iostream>
#include<string>
using namespace std;
int main()
{
    int temp ;
    cin >> temp ;
    char opr ;
    cin >> opr ;
    if((temp <= 0 && (opr == 'C' || opr == 'c')) || (temp <= 32 && (opr == 'F' || opr == 'f')))
    cout << "solid" ;
    else if((temp >= 100 && (opr == 'C' || opr == 'c')) || (temp >= 212 && (opr == 'F' || opr == 'f')))
    cout << "gas" ;
    else if(((temp < 100 && temp > 0) && (opr == 'C' || opr == 'c')) || (((temp > 32 && temp < 212) && (opr == 'F' || opr == 'f'))))
    cout << "liquid" ;
}