#include<iostream>
#include<string>
using namespace std;
int main()
{
    int num[3] ;
    int check = 0 ;
    for(int n = 0 ; n < 3 ; n++)
    {
        cin >> num[n] ;
    }
    if(num[0] == num[1] && num[1] == num[2] && num[0] == num[2])
    check += 2 ;
    else if(num[0] == num[1] || num[1] == num[2] || num[0] == num[2])
    check += 1 ;
    else if(num[0] != num[1] && num[1] != num[2] && num[0] != num[2])
    check += 0 ;
    if(check == 2)
    cout << "all the same" ;
    else if (check == 0)
    cout << "all different" ;
    else if(check == 1)
    cout << "neither" ;
}