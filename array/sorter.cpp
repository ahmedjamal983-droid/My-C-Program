#include <stdio.h>
int main()
{   
    int n = 0, i, j, p = 0, q,j2=1;
    int array[5] = {1, 34, 56, 3, 4};
    int array1[5] ; 
    do
    {
        for (i = 0; i < 5; i++)

        {
            if (n < array[i])
            {
                n = array[i];
            };
        };
          printf("%dst greatest num = %d " ,j2,n) ;
          array1[5-j2]=n ;
        for (j = 0; j < 5; j++)
        {
            if (n == array[j])
            {
                array[j] = 0;
            }
        };
        j2++ ;
        n=0 ;
        scanf("%d", &q);
        

    }

    while (q ==0 && j2<=5);

    
} ;
