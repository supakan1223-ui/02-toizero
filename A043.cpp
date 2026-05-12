#include<iostream>
#include<string>
using namespace std ;
int main ()
{
    int mainscore ;
    int secscore ;
    int daystreak ;
    int scrsum ;
    int tier = 0 ;
    int spstat = 0 ;
    cin >> mainscore >> secscore >> daystreak ;
    if(daystreak <= 3 )
    scrsum = mainscore + secscore ;
    else if (daystreak > 3)
    scrsum = (mainscore + secscore)*1.5 ;
    if(scrsum >= 1500)
    tier += 5 ;
    else if(scrsum > 1000 && scrsum < 1500)
    tier += 4 ;
    else if (scrsum > 500 && scrsum < 1000)
    tier += 3 ;
    else if(scrsum > 200 && scrsum < 500)
    tier += 2 ;
    else if (scrsum < 200)
    tier += 1 ;
    if( tier == 4 && secscore > 300)
    spstat += 88 ;
    else if (tier == 5 && daystreak >= 7)
    spstat += 99 ;
    else
    spstat = 0 ;
    cout << scrsum << endl << tier << endl << spstat ;
}