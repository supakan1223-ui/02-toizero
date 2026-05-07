#include<iostream>
#include<string>
using namespace std;
int main()
{
    int num ;
    cin >> num ;
    if(num < 0)
    cout << "Error : Please input positive number" ;
    else if (num == 0 || num > 9)
    cout << "Error : Out of range" ;
    else
    {
        if(num < 4)
        {
            for(int n = 1 ; n <= num ; n++)
            cout << "I" ;
        }
        else if(num == 4)
        {
            cout << "IV" ;
        }
        else if(num >= 5 && num < 9)
        {
            cout << "V" ;
            for(int n = 1 ; n <= num - 5 ; n++)
            cout << "I" ;
        }
        else if(num == 9)
        {
            cout << "IX" ;
        }
    }
}