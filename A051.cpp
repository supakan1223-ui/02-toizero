#include <iostream>
#include <string>
using namespace std;
int main() {
    string word ;
    cin >> word ;
    int num ;
    cin >> num ;
    num %= 26;
    for (int a = 0; a < word.size(); a++)
    {
      int findz = (word[a] + num) - 122 ;
      word[a] += num ;
      if(word[a] > 122)
      word[a] = 'a' + findz - 1 ;
      else
      {}
    }
    for(char a : word)
    cout << a  ;
    return 0;
}