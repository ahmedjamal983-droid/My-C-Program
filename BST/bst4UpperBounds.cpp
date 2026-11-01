#include <bits/stdc++.h>
using namespace std;

int UpperBound(vector<int> arr,int dig)
{
    int low=0,ans ;
    int high=arr.size()-1 ;
    int mid ;
    while (low<=high) 
    { mid=(low+high)/2 ;
    
    if(arr[mid]>dig)
    {
      ans=arr[mid] ;
      high=mid-1 ;
    } 

    else
     {
         low=mid+1 ;
     }



    }



    return ans ;
}

int main()
{
    vector<int> arr={1,2,3,4,5,6,7,8,9,10,11} ;
    cout<<UpperBound(arr, 99) ;
}