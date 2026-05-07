#include<iostream>
#include<string>
using namespace std;
string swapnum(string num , char op)
{
    int num1 = stoi(num) ;
    int box = num[0] ;
    num[0] = num[1] ;
    num[1] = box ;
    int num2 = stoi(num) ;
    if(op == '+')
    {
        int result = num1 + num2 ;
        return to_string(num1)+" "+string(1,op)+" "+to_string(num2)+" = "+to_string(result);
    } 
    else if(op == '-')
    {
        int result = num1 - num2 ;
        return to_string(num1)+" "+string(1,op)+" "+to_string(num2)+" = "+to_string(result);
    }
    else if(op == '*')
    {
        int result = num1 * num2 ;
        return to_string(num1)+" "+string(1,op)+" "+to_string(num2)+" = "+to_string(result);
    } 
    else if(op == '/')
    {
        if(num2 == 0)
        {
            return "error" ;
        }
        else
        {
            float result = num1 / num2 ;
            return to_string(num1)+" "+string(1,op)+" "+to_string(num2)+" = "+to_string((float)result);
        }
    } 
}
int main()
{
    string num ;
    char op ;
    cin >> num ;
    cin >> op ;
    cout << swapnum(num , op) ;
}