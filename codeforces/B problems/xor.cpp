#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> array, int j, int n, int end_sum){
  for(int i = j; i<n; i++){
    if(array[i] != end_sum){
      return false;
    }
  }
  return true;
}

int main() {
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> array;

    for(int i=0; i<n; i++){
      int num;
      cin >> num;
      array.push_back(num);
    }
    int end_sum;
    end_sum = array[0];
    bool isYes = false;
    
    for(int i=1; i<n; i++){
      if(check(array, i, n, end_sum)){
        isYes = true;
        break;
      }
      end_sum ^= array[i];
    }
    // cout << "end_sum: " << end_sum << endl;
    if (end_sum == 0 || isYes) {
      cout << "YES" << "\n";
    } else {
      cout << "NO" << "\n";
    }
  }
}
