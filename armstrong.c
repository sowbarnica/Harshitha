#include <stdio.h>
int main()
{
    int num, on, re, res = 0;

    printf("Enter a three digit integer: ");
    scanf("%d", &num);

    on = num;

    while (on != 0)
    {
        re= on%10;
        res += re*re*re;
        on /= 10;
    }

    if(res == num)
        printf("%d is an Armstrong number.",num);
    else
        printf("%d is not an Armstrong number.",num);

    return 0;
}

