#include <bits/stdc++.h>
using namespace std ;
void bst_search(vector<float> arr ,float dig)
{
    int low=0 ,i=0;
    int high=arr.size() ;
    int mid=(low+high)/2 ;

    while(low<=high)
    {   
         mid=(low+high)/2 ;
        if(arr[mid]>dig)
        {   ++i ;
            high=mid-1 ;
        } ;

        if (arr[mid]<dig) 
        { ++i ;
          low=mid+1 ;        
        } ;

        if(arr[mid]==dig)
        {
            cout<<"found \n" ;
            break ;
        };

    }

    cout<<i ;
}

int main()
{
    vector<float> a={1,3,3.1,3.2,3.3,9,10,12} ;
    bst_search(a,38) ;
}