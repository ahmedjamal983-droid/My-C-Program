#include <stdio.h>
int main(){
    printf("enter row>>>") ;
    
//loop 1 for row
int i,j,k,l,m ;
scanf("%i",&k);
for ( i = 1; i <=k; i++)
{   //loop 2 for num1
    for ( j = 1; j <= i; j++)
    {
        printf("%d",j);
    } ;
    //loop 3 for space
    for ( m = 1; m <= 2*k-2*i; m++)
    {
        printf(" ");

    } ;
    //loop 4 for num 
    for ( l = i; l >0;l--)
    {
        printf("%d",l);
    } ;
    

printf("\n");








} ;





} ;