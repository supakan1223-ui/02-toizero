#include <iostream>
using namespace std;
int main() {
    string dat[3] ;
    for (int a = 0; a < 3; a++) {
        cin >> dat[a] ;
    }
    int age = stoi(dat[1]) ;
    int mon = stoi(dat[2]) ;
    int bonus = 0 ;
    if(dat[0] == "M")
    {
      if(age < 5)
      bonus += 1500 + ((mon*6)/100) ;
      else if(age >= 5 && age <= 10)
      bonus += 1500 + ((mon*8)/100) ;
      else if(age > 10)
      bonus =+ 1500 + ((mon*10)/100) ;
    }
    else if(dat[0] == "B")
    {
      if(age < 5)
      bonus += 1000 + ((mon*5)/100) ;
      else if(age >= 5 && age <= 10)
      bonus += 1000 + ((mon*6)/100) ;
      else if(age > 10)
      bonus =+ 1000 + ((mon*7)/100) ;
    }
    else if(dat[0] == "G")
    {
      if(age < 5)
      bonus += 500 + ((mon*4)/100) ;
      else if(age >= 5 && age <= 10)
      bonus += 500 + ((mon*5)/100) ;
      else if(age > 10)
      bonus =+ 500 + ((mon*6)/100) ;
    }
    cout << bonus ;
    return 0;
}