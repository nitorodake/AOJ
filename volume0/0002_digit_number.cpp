#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int a, b, sum, count;
    double base;

    while(cin >> a >> b ) {
      sum = a + b;
      count = 1;
      base = 10.0;
      while(sum/base >= 1) {
        base *= 10;
        count++;
      }
      cout << count << endl;
    }


}
