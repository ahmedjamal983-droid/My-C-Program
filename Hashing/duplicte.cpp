#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std ;

int main()
{
    vector<int> arr1 ={1,2,3,4,5} ;

    vector<int> arr2 ={4,5,6,7,8} ;
    unordered_set<int> dup ;
    for(int i :arr1)
    {
      if(dup.find(i)!=dup.end())
      {
          cout<<i ;
      }

      else {
      dup.insert(i) ;

      }
    }


    for(int i :arr2)
    {
      if(dup.find(i)!=dup.end())
      {
          cout<<i ;
      }

      else {
      dup.insert(i) ;
      
      }
    }
}