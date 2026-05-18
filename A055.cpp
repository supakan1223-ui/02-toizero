#include <iostream>
using namespace std;
int main() {
    int dat[3] = {} ;
    int sum = 0 ;
    double price = 0 ;
    for (int a = 0; a < 3; a++) {
        cin >> dat[a] ;
        sum += dat[a] ;
    }
    if(sum >= 3)
    {
      if(dat[0] > 0)
      {
        price += dat[0] * 25 ;
      }
      if(dat[1] > 0)
      {
        price += dat[1] * 40 ;
      }
      if(dat[2] > 0)
      {
        price += dat[2] * 55 ;
      }
      double dis = (price - (price * 10 / 100))  ;
      cout << int(dis) ;
    }
    else if(sum < 3)
    {
      if(dat[0] > 0)
      {
        price += dat[0] * 25 ;
      }
      if(dat[1] > 0)
      {
        price += dat[1] * 40 ;
      }
      if(dat[2] > 0)
      {
        price += dat[2] * 55 ;
      }
      cout << price ;
    }
    return 0;
}