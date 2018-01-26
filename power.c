#include <stdio.h>
int main()
{
    int b, ex;

    int res = 1;

    printf("Enter a b number: \n");
    scanf("%d", &b);

    printf("Enter an ex: \n");
    scanf("%d", &ex);

    while (ex != 0)
    {
        res *= b;
        --ex;
    }

    printf("Answer = %d", res);

    return 0;
}

