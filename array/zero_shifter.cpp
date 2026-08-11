#include <stdio.h>
#include <stdlib.h>
int main()
{
    int j, i, n, q = 0, q2 ;
    int *ptr = (int *)(malloc(n * sizeof(4)));
    printf("enter size of arary \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%dth element  \n", i);
        scanf("%d", (ptr + i));
    }
    while ( q2==0)
    {
        for (i = 0; i < n - 1; i++)
        {
            if (ptr[i] == 0)
            {
                ptr[i] = ptr[i + 1];
                ptr[i + 1] = 0;
                q = q + 1;
            };
        };
        for (i = 0; i < n; i++)
        {
            printf("%d", *(ptr + i));
        };
        printf("enter q2 value") ;
   scanf("%d",&q2) ;
   
   
    };

    return 0;
};
