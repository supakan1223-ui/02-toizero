#include<iostream>
#include<string>
using namespace std;
int moncal(int year , int day)
{
    int allcal = (year * 100) + day ;
    return allcal ;
}
int main()
{
    int day ;
    cin >> day ;
    int year ;
    cin >> year ;
    int all = ( year * 100) + day ;
    if(all >= moncal(1 , 1) && all <= moncal(1 , 19 ))
    cout << "capricorn" ;
    else if(all >= moncal(1 , 20 ) && all <= moncal(2 , 18 ))
    cout << "aquarius" ;
    else if(all >= moncal(2 , 19 ) && all <= moncal(3 , 20 ))
    cout << "pisces" ;
    else if(all >= moncal(3 , 21 ) && all <= moncal(4 , 19 ))
    cout << "aries" ;
    else if(all >= moncal(4 , 20 ) && all <= moncal(5 , 20 ))
    cout << "taurus" ;
    else if(all >= moncal(5 , 21 ) && all <= moncal(6 , 21 ))
    cout << "gemini" ;
    else if(all >= moncal(6 , 22 ) && all <= moncal(7 , 22 ))
    cout << "cancer" ;
    else if(all >= moncal(7 , 23 ) && all <= moncal(8 , 22 ))
    cout << "leo" ;
    else if(all >= moncal(8 , 23 ) && all <= moncal(9 , 22 ))
    cout << "virgo" ;
    else if(all >= moncal(9 , 23 ) && all <= moncal(10 , 23 ))
    cout << "libra" ;
    else if(all >= moncal(10 , 24 ) && all <= moncal(11 , 21 ))
    cout << "scorpio" ;
    else if(all >= moncal(11 , 22 ) && all <= moncal(12 , 21 ))
    cout << "sagittarius" ;
    else if(all >= moncal(12 , 22) && all <= moncal(12 , 31 ))
    cout << "capricorn" ;
}