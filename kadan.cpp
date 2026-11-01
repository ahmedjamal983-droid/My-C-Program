#include<iostream>
#include <vector>
#include<algorithm>
using namespace std ;


int suma(vector<int>arr){
   int sx =0;
    for(auto it:arr){sx=it+sx ;}
  return sx ;
}

int mxsm(vector<int>&arr)
{   int sum =0, best_sum=0 ;

int b= *max_element( arr.begin(),arr.end() ) ;
int c=*min_element( arr.begin(),arr.end() ) ;
if (b<0) 
{
return b ;
} ;

if (c>0) 
{
return suma(arr);
} ;



    for (int i=0; i<arr.size(); i++)
    {
       sum=arr[i]+sum ;
     
       if (sum<0)
       {
         sum=0 ;
       } ;

       best_sum=max(sum,best_sum) ;
     
       

    } ;
        return best_sum ;

}


int main()
{
    vector<int> arr={-2, 1, -3, 4, -1, 2, 1, -5, 4} ;
    cout<<mxsm(arr)<<"\n" ;
} ;



