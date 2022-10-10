#include<iostream>
using namespace std;

int main(){
  // Sum Variable
  int sum;

  // Calculating Sum
  for(int i=1; i<11; i++)
    sum += i*i;

  // Output
  cout << "Sum of square of first 10 Natural Numbers: "
       << sum
       << '\n';

  return 0;
}