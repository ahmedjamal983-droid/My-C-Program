
#include <bits/stdc++.h>
using namespace std;

 


vector<pair<int,pair<int,int>>> ThreeSumBetter(vector<int>&arr , int sum){
  
    for (int it : arr) {
       int n = arr.size() ;
  int left = 0;
  int right = n - 1;
  while (arr[right] + arr[left] != (sum-it)) {
    if (arr[left] + arr[right] > (sum-it)) {
      right--;
    };

    if (arr[left] + arr[right] < (sum-it)) {
      left++;
    }
  };

  

      
      if (arr[left]+arr[right]+it == sum)
       {
          return {{left,{right,it}}} ;
       } ;
    } ;

    return {{-1,{-2,-3}}} ;
} ;

int main(){
    vector<>
}