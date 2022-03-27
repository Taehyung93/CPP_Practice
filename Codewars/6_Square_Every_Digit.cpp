/*
    7kyu

    1234 => 14916

*/




#include <iostream>
#include <vector>
#include <string>

using namespace std;

int square_digits(int num) {
  string str = to_string(num);
  int length = str.size();
  string square = "";
  for(int i = 0; i < length; i++){
      int intTemp =  ((int)str[i] - 48) * ((int)str[i] - 48);
      string temp = to_string(intTemp);
      square += temp;
  }
  
  return stoi(square);
}


int square_digits(int n) {
  int a = 1;
  int m = 0;
  while (n > 0) {
    int d = n % 10;
    m += a * d * d;
    a *= d <= 3 ? 10 : 100;
    n /= 10;
  }
  return m;
}