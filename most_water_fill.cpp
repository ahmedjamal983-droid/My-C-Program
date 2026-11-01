#include <vector>
#include <algorithm>
#include<iostream> 
using namespace std ;
int mwf(vector<int>&nums)
{int n =nums.size()-1 , i=0 ,max,max2,j=0,max3=0;
    while(i!=n)
    { max=(n-i)*nums[i] ;
      if(nums[i]<=nums[n-j])
      {  max2=(n-j-i)*nums[i] ;}
      else{max2=(n-j-i)*nums[n-j] ;}
        if(max>=max2)
        {
            if (nums[i]<=nums[n-j]) 
            {
              i++ ;
            } 
            else{j++ ;}
        }
        if (max2>max3) 
        {
         max3=max2 ;
        }
    }
    return max3 ;
}

int main()
{
    vector<int>nums={8,2,1,5} ;
    cout<<mwf(nums) ;
}
