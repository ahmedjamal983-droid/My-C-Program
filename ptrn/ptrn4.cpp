#include <stdio.h>
int main(){
    int i,j,k,l ;
    char ch ='A' ;
printf("enter row>>");
scanf("%d" ,&k);
for ( i = 0; i <k; i++)
{  for ( l = 1; l <=( 2*(k-i)+1)/2; l++)
{
    printf(" ") ;
}

   
   
   
    for ( j = 1; j <=2*i+1; j++)
    {
       printf("%c",ch) ;
       ch++ ; 
    }
    ch='A' ;
    printf("\n") ;
}







}


