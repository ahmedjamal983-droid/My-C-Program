#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int lowerbound(vector<float> arr,float x) 
{   int mid,low=0,high=arr.size()-1,ans;
    while(low<=high)
    {   mid=(low+high)/2 ;
        if(arr[mid]>x)
        {
          high=mid-1 ;
          ans=mid ;

        } ;

         if (arr[mid]<x)
        {
            low=mid+1 ;
        } ;

       
    }
 
 cout<<ans ;
 return ans ;

}


int main ()
{
    vector<float> arr={1,3,5,7,7.8,9,9.1,9.2,9.3} ;
    lowerbound(arr,6) ;
    cout<<*(lower_bound(arr.begin(),arr.end(),9.3)) ;
}