#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  scanf("%d", &t);

  while(t--){
    int n;
    scanf("%d", &n);
    vector<int> odd;
    vector<int> even;

    for(int i = 0; i<n; i++){
      int num;
      scanf("%d", &num);
      if(num%2==0){
        even.push_back(num);
      } else {
        odd.push_back(num);
      }
    }
    for(int j = 0; j<odd.size(); j++){
      printf("%d ", odd[j]);
    }
    for(int j = 0; j<even.size(); j++){
      printf("%d ", even[j]);
    }
    printf("\n");
  }
}
