#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, n, i, j, k;
    ptr = (int *)(malloc(k * sizeof(9)));
    printf("enter the size o array >>") ;
        scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("enter %dth element>>", i) ; 
            scanf("%d", &ptr[i]);
    } ;
    for (i = 0; i < n; i++)
    {
        if (ptr[(n-1) - i] == ptr[i])
        {
            printf("yes pallindrome ") ;
        }

        else
        {
            printf("it aint pallindrome son") ;
        };
    } ;
    return 0 ;
} ;
