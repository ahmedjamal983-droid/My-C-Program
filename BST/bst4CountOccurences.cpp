#include <iostream>
#include <vector>
using namespace std;

int UpperBound(vector<int> arr, int dig) {
  int low = 0, ans;
  int high = arr.size() - 1;
  int mid;
  while (low <= high) {
    mid = (low + high) / 2;

    if (arr[mid] > dig) {
      ans = mid;
      high = mid - 1;
    }

    else {
      low = mid + 1;
    }
  }

  return ans;
}

int lowerbound(vector<int> arr, int x) {
  int mid, low = 0, high = arr.size() - 1, ans;
  while (low <= high) {
    mid = (low + high) / 2;
    if (arr[mid] >= x) {
      high = mid - 1;
      ans = mid;

    }

    else {
      low = mid + 1;
    };
  }

  
  return ans;
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 10, 11};
  int lo=lowerbound(arr, 5) ;
  int hi =UpperBound(arr, 5);
hi=hi-lo ;
  cout<<hi ;
}