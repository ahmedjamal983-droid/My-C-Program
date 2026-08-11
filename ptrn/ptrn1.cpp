#include <stdio.h>
int main (){
    int i,j,k,l ;
scanf("%i",&k) ;
//loop1 for row
for ( i = 1; i <=(2*k+1); i++)  
{ printf("\n") ;
   if (i<=k)
   {
    for ( j = 1; j <=i; j++)
    {
        printf("*") ;
    }
    
   }
   else{for ( l = 1; l <(2*k+1)-i; l++)
   {printf("*") ;
    /* code */
   }
   } ;
} ;





    
}