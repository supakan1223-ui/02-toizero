#include<iostream>
#include<string>
using namespace std ;
int main()
{
    string inp ;
    cin >> inp ;
    string result = "" ;
    int plus = inp.size();
    for(int a = 0 ; a < plus; a ++)
    {
        result += inp[a] ;
        int remain = plus - 1 - a ;
        if(remain > 0 && remain % 3 == 0)
        result += ",";
    }
    cout << result ;
}