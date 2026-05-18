#include <iostream>
using namespace std ;
int main() {
    int player ;
    int real ;
    cin >> player >> real ;
    if(real > 6 || real < 1 || player > 6 || player < 1  )
    cout << "Invalid" ;
    else if (real == player)
    cout << "Correct!" ;
    else 
    cout << "Wrong!" ;
    return 0;
}