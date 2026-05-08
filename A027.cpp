#include<iostream>
#include<string>
using namespace std;
int main()
{
    string inpt ;
    cin >> inpt ;
    for(int swp = 0 ; swp < inpt.size() / 2  ; swp ++)
    {
        char temp = inpt[swp];
        inpt[swp] = inpt[inpt.size() - 1 - swp];
        inpt[inpt.size() - 1 - swp] = temp;
    }
    cout << inpt ;
}