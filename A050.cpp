#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
int main() {
    vector<int> in ;
    string line ;
    getline(cin , line) ;
    stringstream a(line) ;
    int x ;
    int numm = 0 ;
    int numw = 0 ;
    while(a >> x)
    if(x >= 0)
    in.push_back(x) ;
    for(int a = 0; a < (int)in.size() ; a++) {
      if( in[a] % 2 == 0)
      numm += 1 ;
      else if ( in[a] % 2 != 0)
      numw += 1 ;
    }
    cout << numw << " " << numm << " " << in.size();
}