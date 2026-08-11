#include <stdio.h>
int main()
{
    int i,j,n=0 ;
    int array1[5][5] = { {1, 2, 3, 4, 5},
                         {0, 2, 5, 7, 8},
                         {18, 35, 8, 32, 1},
                         {11, 34, 22, 7, 5},
                         {1, 4, 7, 9, 10  } } ;

for (i  = 0; i <5; i++ )
{
    for ( j =0; j <5; j++)
    {
       n=n+array1[j][i] ;
    } ;
    printf("sum of col %d is %d \n",i,n) ;
    
    n=0 ;




}
}