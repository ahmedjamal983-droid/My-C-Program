#include <iostream>
#include<algorithm>
#include <utility>
#include <vector>
using namespace std;

void zero_shifter(vector<int>&arr)
{
    int i,p=0 ;
    for(i=0;i<arr.size();i++)
    {if (arr[i]!=0 )
    {
     p++ ;
     swap(arr[i],arr[p-1]) ;
    }
    
    }
} ;


int main()
{
    vector<int> a ={1,0,2,0,3,0,0,4} ; 
    zero_shifter(a) ;
    cout<<endl ;
    for (auto it : a) 
    {
    cout<<it<<endl;
    }
}