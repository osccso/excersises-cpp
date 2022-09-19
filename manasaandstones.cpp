#include <bits/stdc++.h>

using namespace std;

vector<int> stones(int n, int a, int b){
  vector<int> solution;
  int temp;
  // determine which is the biggest a is always gonna be smaller always and b is the biggest
  if (b < a){
    temp = a;
    a = b;
    b = temp;
  }
  if (b == a){
    solution.push_back(a * (n - 1));
    return solution;
  }
  for (int i = 0; i < n; ++i){
    solution.push_back(a * (n - i - 1) + i * b);
  }
  return solution;
}

int main(){
  vector<int> solution;
  solution = stones(75,25,25);
  for (int i = 0; i < solution.size(); ++i){
    cout <<"this is the i value: "<<solution[i]<<endl; 
  }
}