#include<iostream>
#include<string>
#include<vector>
#include <sstream>
using namespace std;
int main()
{
    int n ;
    cin >> n ;
    cin.ignore() ;
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> input ;
    int box ;
    int set[n] = {};
    while(ss >> box)
    {
        input.push_back(box) ;
    }
    int i = 0 ;
    int result = 0;
    for(int a = 0 ; a < n  ; a ++)
    {
        if(input[i] > input[i+1])
        set[a] = input[i] ;
        else if (input[i] < input[i+1])
        set[a] = input[i+1] ;
        else if (input[i] == input[i+1])
        set[a] = input[i+1] ;
        i += 2 ;
    }
    for(int a = 0 ; a < n  ; a ++)
        result += set[a] ;
    for(int a = 0 ; a < n - 1 ; a ++)
    {
        if (n > 1)
        {
            cout <<set[a] << " + " ;
        } 
    }
    if(n == 1)
    cout << set[0] ;
    else if(n > 1)
    cout << set[n-1] << " = " << result ;
}