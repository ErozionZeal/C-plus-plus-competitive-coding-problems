#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  for (int i=0; i<t; i++){
    int n;
    cin >> n;
    bool isImperfect = false;

    for (int j =0; j<n; j++){
      float num;
      cin >> num;
      bool passed = true;
      for(int k = 1; k<105; k++){
        if (num/k == k){
          passed = false;
        }
      }
      if (passed){
        isImperfect = true;
      }
    } 
    if(isImperfect) {
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
    }
    isImperfect = false;
  }
}