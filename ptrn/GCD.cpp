#include <stdio.h>
int HCF(int b ,int a){ 
    if (b%a==0){return a ;}
    else{ return HCF(a,b%a);} ;
} ;

int main (){
printf(" enter number \n b>a \n") ;
int i,j ;
scanf("%d %d",& i,&j) ;
printf("%d is the GCD of %d and %d",HCF(i,j),j,i);




}