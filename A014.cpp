#include<iostream>
#include<string>
using namespace std;
float findmin(float input[3])
{
    float min = input[0] ;
    for(int pro = 0 ; pro < 3 ; pro++ )
    {
        if( input[pro] < min  )
        {
            min = input[pro] ;
        }
    } 
    return min ;
}
int main()
{
    float input[3] ;
    for(int pro = 0 ; pro < 3 ; pro++ )
    {
        cin >> input[pro] ;
    }
    float result = findmin(input) ;
    cout << result ;
}