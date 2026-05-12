#include<iostream>
#include<string>
#include<sstream>
#include<vector>
using namespace std ;
int main()
{
    string input ;
    getline(cin , input);
    stringstream box(input) ;
    char n ;
    vector<char> temp;
    int price = 0 ;
    string day = "" ;
    while(box >> n)
    {
        temp.push_back(n) ;
    }
    int a = 0 ;
    if(temp.size() == 5)
    {
        a = (temp[0] - '0') * 10 + (temp[1] - '0') ;
        day += temp[2];
        day += temp[3];
        day += temp[4];
        if(a >= 10 && a <= 18)
        {
            if(day == "Wed")
            price += 50 ;
            else
            price += 100 ;
        }
        else if(a > 18 && a <= 99)
        {
            if(day == "Wed")
            price += 75 ;
            else
            price += 150 ;
        }
    }
    else if(temp.size() == 4)
    {
        day += temp[1];
        day += temp[2];
        day += temp[3];
        if((temp[0] - '0') >= 5 && (temp[0] - '0') <= 9)
        {
            if(day == "Wed")
            price += 50 ;
            else
            price += 100 ;
        }
        else if( (temp[0] - '0') < 5 )
        price = 0 ;
    }
    else if(temp.size() == 6)
    {
        a = (temp[0] - '0') * 100 + (temp[1] - '0') *10 + (temp[2] - '0') ;
        day += temp[3];
        day += temp[4];
        day += temp[5];
        if(a >= 100 && a <= 120)
        {
            if(day == "Wed")
            price += 75 ;
            else
            price += 150 ;
        }
    }
    cout << price ;
}