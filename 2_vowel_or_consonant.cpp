#include<iostream>
using namespace std;

int main(){
  // Variable
  char ch;

  // Input
  cout << "Enter Enter a Character: ";
  cin >> ch;

  // Condition and Output
  cout << "Character is a ";
  if(
    ch == 'a' ||
    ch == 'e' ||
    ch == 'i' ||
    ch == 'o' ||
    ch == 'u'
  ) cout << "Vowel";
  else cout << "Consonant";
  cout << '\n';


  return 0;
}