#include <bits/stdc++.h>  
#include <vector>
using namespace std ;

void TwoSumBrute(vector<int>num , int trgtsm){
    int n = num.size() ;
    int i ,j ;
    for(i=0 ; i<n ;i++){

        for (j=i+1;j<n;j++) {
         if(num[i]+num[j]==trgtsm){cout<<i<<"," <<j ;}
        } ;
    } ;


} ;


int main(){
vector<int> arr ={1,3,5,2,7,9} ;
TwoSumBrute(arr, 10) ;

}