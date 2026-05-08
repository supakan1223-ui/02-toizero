#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n ;
    cin >> n ;
    cin.ignore() ;
    string iput;
    getline(cin, iput);
    string desp = "" ;
    for(int de = 0 ; de < iput.size() ; de++)
    {
        if(iput[de] != ' ')
        {
            desp += iput[de] ;
        }
    }
    int enco = stoi(desp) ;
    cout << enco ;
}