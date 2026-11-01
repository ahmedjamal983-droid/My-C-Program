#include <iostream>
#include <vector> 
using namespace std;

int searchRotated(vector<int> arr,int target ) 
{
    int low=0,high=arr.size()-1,mid;
    while(low<=high)
    {
        mid=low +(high-low)/2 ;

        if(arr[mid]>=arr[low]) 
        {
           if(target>=arr[low] && target<=arr[mid])
           {
               high=mid-1 ;
           }

           else
           {
               low=mid+1 ;
           } ;


        }

        else
        {
            if(target>arr[mid] && target<=arr[high])
           {
               high=mid-1 ;
           }

           else
           {
               low=mid+1 ;
           } ;
        }

    }

    return -1 ;
}