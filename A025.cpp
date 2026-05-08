#include<iostream>
#include<string>
using namespace std;
string chf (string typ )
{
    int siz = typ[0] ;
    if(siz == 'A' || siz == 'a')
        return "ace" ;
    else if(siz == 'K' || siz == 'k')
        return "king" ;
    else if(siz == 'Q' || siz == 'q')
        return "queen" ;
    else if(siz == 'J' || siz == 'j')
        return "jack" ;
    else if(siz == '1' && typ.size() != 3)
        return "1" ;
    else if(siz == '2')
        return "2" ;
    else if(siz == '3')
        return "3" ;
    else if(siz == '4')
        return "4" ;
    else if(siz == '5')
        return "5" ;
    else if(siz == '6')
        return "6" ;
    else if(siz == '7')
        return "7" ;
    else if(siz == '8')
        return "8" ;
    else if(siz == '9')
        return "9" ;
        else if(siz == '1' && typ[1] == '0')
    return "10" ;

}
string chb (string typ )
{
    int siz = typ[typ.size() - 1] ;
    if(siz == 'D' || siz =='d')
        return "diamonds" ;
    else if(siz == 'H' || siz =='h')
        return "hearts" ;
    else if(siz == 'S' || siz =='s')
        return "spades" ;
    else if(siz == 'C' || siz =='c')
        return "clubs" ;
}
int main()
{
    string card ;
    cin >> card ;
    cout << chf(card) << " of " << chb(card);
    
}