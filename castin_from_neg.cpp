#include <iostream>
using namespace std;

int main() {
  float j = 41;
  float v = 400;
  float m = j/v;
  uint16_t d = static_cast<uint16_t>(-200.F);
  cout << "m = " << m << endl;
  cout << "d = " << d << endl;
}