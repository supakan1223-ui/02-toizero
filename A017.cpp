#include<iostream>
#include<string>
using namespace std;
int main()
{
    int id[6];
    for(int in = 0 ; in < 6 ; in++)
    cin >> id[in] ;
    int deY = id[0] - id[3] ;
    int ded = id[2] - id[5] ;
    int dem = id[1] - id[4] ;
    if(deY == 0 && dem == 0 && ded == 0)
    cout << "0" ;
    else if(deY < 0)
    cout << "1" ;
    else if(deY == 0 && dem < 0)
    cout << "1" ;
    else if(deY == 0 && dem == 0 && ded < 0)
    cout << "1" ;
    else 
    cout << "2";
}