#include<iostream>
using namespace std;

int main(){
  // Variables
  int i, j;

  // Shape
  for(i=0; i<6; i++){
    for(j=0; j<i; j++)
      cout << '*';
    cout << '\n';
  }

  // And
  cout << "\nAnd\n\n";

  // Inverted Shape
  for(i=0; i<6; i++){
    for(j=0; j<6-i; j++)
      cout << '*';
    cout << '\n';
  }
  
  return 0;
}
