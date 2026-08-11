#include <stdio.h>
#define N 19

int main()
{
   
    int array[N] = {0};
    int array1[N] = {0}, i, j, x;
    array[(N - 1) / 2] = 1;

    do
    {
        printf(" \n\n");
        for (i = 0; i < N - 2; i++)
        {
            array1[i + 1] = array[i + 2] + array[i];
        }

        for (j = 0; j < N; j++)
        {
            if (array1[j] != 0)
            {
                printf("[%d]", array1[j]);
            };
            if (array1[j] == 0)
            {
              printf("    ");
            };
        }

        for (int i = 0; i < N; i++)
        {
            array[i] = array1[i];
        }

    } while (array1[1] == 0);
}
