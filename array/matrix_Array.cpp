#include <stdio.h>
int main()
{
    // registering the arrays
    int arr1[3][3];
    int arr2[3][3];
    int arr3[3][3];
    // registering the params
    int i, j, d, e1, e2, i1, i2, i3, c, c1, r, r1;
    for (i1 = 0; i1 < 3; i1++)
    {
        printf("enter elements for arr1 r%d>>", i1+1);
        for (i2 = 0; i2 < 3; i2++)
        {
            scanf("%d", &arr1[i1][i2]);
        }
        printf("enter elemnt arr2 r%d>>", i1+1);
        for (i3 = 0; i3 < 3; i3++)
        {
            scanf("%d", &arr2[i1][i3]);
        }
    }

    for (i = 0; i < 3; i++)

    {
        printf("\n");

        for (j = 0; j < 3; j++)
        {
            printf(" [%d] ", arr3[i][j] = arr1[i][j] + arr2[i][j]);
        }
        printf("\n");
    }

    printf("ur both array are\n arr1 \n  ");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("[%d]", arr1[r][c]);
        }
        printf("\n");
    }
 
 printf("\n \n arr2 \n") ;
    for (r1 = 0; r1 < 3; r1++)
    {
        for (c1 = 0; c1 < 3; c1++)
        {
            printf("[%d]", arr2[r1][c1]);
        }
        printf("\n");
    }

    return 0;
}