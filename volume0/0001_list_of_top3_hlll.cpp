#include<iostream>
#include<iomanip>
#include<vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> hills;
    int n;

    while(cin >> n) {
      hills.push_back(n);
    }
    sort(hills.begin(),hills.end(),greater<int>());
    for (int i=0;i < 3;i++){
      cout << hills[i] << endl;
    }
}
