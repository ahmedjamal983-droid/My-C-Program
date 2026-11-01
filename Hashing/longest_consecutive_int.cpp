#include<bits/stdc++.h>
#include <unordered_set>
using namespace std;
int func(vector<int>&arr)

{unordered_set<int> nxt ;
int i1=0 ;
    
    for  (int i:arr){nxt.insert(i) ;}
    while (i1!=arr.size())
    {
     if(nxt.find(arr[i1]+1)!=nxt.end())
     {
         cout<<*(nxt.find(arr[i1]+1));
     } ;

     i1++ ;
    } 
    return 0 ;
} 



int main()
{
    vector<int>arr={100,4,200,1,3,2} ;
    func(arr) ;
}