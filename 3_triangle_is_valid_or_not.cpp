#include<iostream>
using namespace std;

int main(){
  float a, b, c;

  // Header
  cout << "Program to find triangle\n";
  for(int i=0; i<22; i++) cout << '*'; cout << '\n';

  // Input Angles
  for(int i=1; i<4; i++){
    cout << "Enter the ";
    switch(i){
      case 1: cout << "first"; break;
      case 2: cout << "second"; break;
      case 3: cout << "third"; break;
    }
    cout << " angle: ";
    switch(i){
      case 1: cin >> a; break;
      case 2: cin >> b; break;
      case 3: cin >> c; break;
    }
  }

  // Condition and Display
  cout << "\n\nThis is ";
  if(a+b+c != 180) cout << "In";
  cout << "Valid Triangle\n\n";

  return 0;
}