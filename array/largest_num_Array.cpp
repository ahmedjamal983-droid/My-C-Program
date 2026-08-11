#include <stdio.h>
int main()
{
  int array1[10];
  int i, i1, i2, j1, j2, i3, n = 0, n1;
  printf("enter  ur num of array");
  for (i = 0; i < 10; i++)
  {

    scanf("%d", &array1[i]);
  };

  for (i1 = 0; i1 < 10; i1++)
  {
    for (i2 = 0; i2 < 10; i2++)
    {
      if (array1[i2] >= array1[i1])
      {
        n = array1[i2];
      };
    };
  };
  printf("first largest number is %d ", n);

  for (i3 = 0; i3 < 10; i3++)
  {
    if (array1[i3] = n)
    {
      array1[i3] = 0;
    };
  };
  for (j1 = 0; j1 < 10; j1++)
  {
    for (j2 = 0; j2 < 10; j2++)
    {
      if (array1[j2] >= array1[j1])
      {
         n1=array1[j2] ;
      };
    };
  };
  printf("first 2nd number is %d ", n1);
}