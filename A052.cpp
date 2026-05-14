#include <iostream>
#include <string>
using namespace std;
void coincal(int money, int coin[3])
{
    if (money >= 1000)
    {
        while (money >= 1000)
        {
            money = money - 1000;
            coin[0] += 1;
            if (money < 1000)
                break;
        }
    }

    if (money >= 500)
    {
        while (money >= 500)
        {
            money = money - 500;
            coin[1] += 1;
            if (money < 500)
                break;
        }
    }
    if (money >= 100)
    {
        while (money >= 100)
        {
            money = money - 100;
            coin[2] += 1;
            if (money < 100)
                break;
        }
    }
}
int main() {
    int tar ;
    cin >> tar ;
    int coin[3] = {0,0,0} ;
    if( tar >= 100 && tar <= 20000 )
    {
      if( tar % 100 == 0 )
      {
        coincal(tar, coin);
        if(coin[0] >= 1)
        cout << "1000 = " << coin[0] << endl;
        if(coin[1] >= 1 )
        cout << "500 = " << coin[1] << endl;
        if(coin[2] >= 1)
        cout << "100 = " << coin[2] << endl;
      }
      else
      {
        cout << "ERROR" ;
      }
    }
    else
    cout << "ERROR" ;
    return 0;
}