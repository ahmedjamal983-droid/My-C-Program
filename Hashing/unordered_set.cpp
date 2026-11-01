
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std ;

int main()
{
    unordered_set<int> dup ;
    dup.insert(1);
    auto b=dup.find(1) ;
    cout<<*(b) ;

    vector<int> arr={1,3,5,7,9,11,13,15,17,19,21,23} ;
    for (auto it : arr ) 
    {
     dup.insert(it);
    } ;

    cout<<dup.size() ;
}