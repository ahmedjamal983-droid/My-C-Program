
#include <stdio.h>
#include <cstdlib>

int main()
{
    int i, j, k = 0, n = 0;







    int array[10] = {1, 2, 2, 4, 5, 4, 7, 8, 9, 7};

    for (i = 0; i < 10; i++)
    {
        k = 0;

        for (j = i + 1; j < 10; j++)
        {
            if (array[j] == array[i])
            {

                k = k + 1;
                array[j] = 0;
            }
        }
        if (array[i]!=0) {
         printf("%d and %d baar aaya hai \n", array[i], k + 1);
        } ;
       
    };

    for (i = 0; i < 10; i++)
    {
        if (array[i] != 0)
        {
            printf("%d", array[i]);
        }
    } ;
};