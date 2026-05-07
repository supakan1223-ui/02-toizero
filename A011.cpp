#include<iostream>
#include<string>
using namespace std;
int main()
{
    string code ;
    cin >> code ;
    int num[code.size()] = {} ;
    for(int out = 0 ; out < code.size() ; out ++)
    {
        num[out] += 1 ;
        if(code [out] == code[out + 1 ])
        {
            code.erase(code.begin() + (out+1) ) ;
            out--;
        }
    }
    for(int out = 0 ; out < code.size() ; out ++)
    {
        cout  << num[out] << code[out] ;
    }
}