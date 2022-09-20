#include <bits/stdc++.h>

using namespace std;

int beautifulTriplets(int d, vector<int> arr) {
  int length = arr.size();
  int count = 0;
  for(int i = 0; i < length - 2; ++i){
    for(int j = 1; j < length -1; ++j){
      for(int k = 2; k < length; ++k){
        // verify your triple and count
        if (arr[j] - arr[i] ==  d && arr[k] - arr[j] ==  d){
          count += 1;
        }
      }
    }
  }
  return count;
}

int main(){
  int solution;
  solution = beautifulTriplets(1,{2,2,3,4,5});
  cout <<"this is the solution: "<<solution<<endl;
}