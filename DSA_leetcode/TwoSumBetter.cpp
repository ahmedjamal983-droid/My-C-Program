#include <iostream>
#include <vector>
using namespace std;
vector<pair<int, int>> TwoSumBetter(vector<int> &arr, int sum) {
  int n = arr.size() ;
  int left = 0;
  int right = n - 1;
  while (arr[right] + arr[left] != sum) {
    if (arr[left] + arr[right] > sum) {
      right--;
    };

    if (arr[left] + arr[right] < sum) {
      left++;
    }
  };

  return {{left, right}};
};

int main() {
  vector<int> num = {1, 3, 5, 7, 9};
  int sum = 10;
  auto n = TwoSumBetter(num, sum);
  for(auto it :n) {
      cout<<it.first<<",,"<<it.second ;
  }
}