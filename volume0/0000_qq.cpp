#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    for(int i1 = 1; i1 < 10; i1++){
      for(int i2 = 1; i2 < 10; i2++){
        cout << i1 << "x" << i2 << "=" << i1*i2 << endl;
      }
    }
}
