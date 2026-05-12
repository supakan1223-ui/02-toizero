#include<iostream>
#include<string>
#include<vector>
using namespace std ;
int chk(int n )
{
    if(n == 1)
    return 100 ;
    else if (n == 2)
    return 120 ;
    else if (n == 3)
    return 200 ;
    else if (n == 4)
    return 60 ;
}
int main()
{
    vector<int> n ;
    int x ;
    int re = 0 ;
    while(cin >> x && x != 5)
    {
        n.push_back(x) ;
    }
    for(int b : n)
    {
        re += chk(b) ;
    }
    cout <<"Bye Bye"<<endl<<"Total Calories: "<< re ;
}