#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--){
    unsigned long long num;
    cin >> num;
    int ans = 0;
    for(int k=15; k>=0; k--){
      unsigned long long k_num = 2050;
      k_num *= pow(10,k);
      while(num>=k_num){
        num = num - k_num;
        ans++;
      }
    }
    if(num == 0){
      cout << ans << '\n';
    }
    else {
      cout << -1 << '\n';
    }
  }
}