// recursion means a function that calls itself to solve smaller isuue
// any function that calls itself is a recursion
// a termination cond is imposed to stop the recursion
// any problem that can be solved recursively  can also be solved iteratively(or with loop)
#include <stdio.h>
int fctrl(int a)
{
    if (a == 0)
    {
        return 1;
    }
    else
    {
        return a*fctrl(a - 1);
    };
}
int main()
{
    int i, j, l;
    scanf("%d", &l);
    for (i = 1; i <= l; i++)
    {
        printf("%dx", i);
    };
    printf("=%d", fctrl(l));
};