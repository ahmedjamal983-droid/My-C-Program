#include <stdio.h>

int main(){
int arr[4];
int i=0,n,j,g;
scanf("%d",&n);
do{ arr[i] = n%10 ;
    n=n/10 ;
    i=i+1 ;
  } 
while(n>0) ;
g = sizeof(arr)/sizeof(arr[1]) ;

for(j=0; j<g ;j++){
printf("%d",arr[j]);
    
    
    } ;
   


}