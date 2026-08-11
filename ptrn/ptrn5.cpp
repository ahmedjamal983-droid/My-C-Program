#include <stdio.h>
int main(){
    printf("enter no.of row");
int i,j,k,l,m ;
char ch='A',ch1,ch2 ;
scanf("%d",&k);
//loop1
for ( i = 1; i<=k; i++) 
{
  ch1=ch+k ;
  
  for ( j = 1; j<=i; j++)
  {
    
    printf("%c",ch1) ;
    ch1=ch-1 ;
  }
  printf("\n") ;

} 
return 0 ;



} ;