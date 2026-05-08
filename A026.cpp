#include<iostream>
#include<string>
using namespace std;
int main()
{
    int inpt[3]  ;
    int even = 0 ;
    int odd = 0 ;
    for(int &chk : inpt)
    cin >> chk ;
    for(int out = 0 ; out < 3 ; out ++)
    {
        if (inpt[out] % 2 == 0 )
        even += 1 ;
        else
        odd += 1 ;
    }
    cout << "even " << even << endl << "odd " << odd ;
}