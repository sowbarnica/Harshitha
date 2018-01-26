#include <stdio.h>

int main()

{

    int number,d =20,s=40;
    printf("Print Odd Numbers in a given range d to s:\n");

    for (number = d; number<= s; number++)

        {

               if (number % 2 == 1)

                  printf ("%d ", number);

         }

                return 0;

}
