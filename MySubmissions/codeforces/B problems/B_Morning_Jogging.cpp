#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--){
    int n, m;
    cin >> n >> m;
    vector<long long> mins(n, 10e9-1);

    for(int i = 0; i<n; i++){
      vector<long> paths;
      for(int j = 0; j<m; j++){
        long long num;
        cin >> num;
        paths.push_back(num);
        mins[j] = min(mins[j], num);
      }
      
      int dist = distance(mins.begin(), max_element(mins.begin(), mins.end()));
      sort(paths.begin(), paths.end());
      rotate(paths.begin(), paths.begin()+dist, paths.end());
      for(int j = 0; j<m; j++){
        cout << paths[j] << " ";
      }
      cout << '\n';
    }
  }
}