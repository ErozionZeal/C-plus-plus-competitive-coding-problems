#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--){
    int n, k;
    cin >> n >> k;
    vector<int> array;

    for(int i = 0; i<n; i++){
      int array_num;
      cin >> array_num;
      array.push_back(array_num);
    }
    for(int i = 0; i<n; i++){
      while(k>0 && array[i]>0){
        k--;
        array[i]--;
        array[n-1]++;
      }
      cout << array[i] << " ";
    }
    cout << "\n";
  }
}