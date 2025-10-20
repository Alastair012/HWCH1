#include <stdio.h>

int main(void)
{
    int n; 

    printf("number\tsquare\tcube\n");

    for (n= 0; n<= 10; n++)
    {
        printf("%d\t%d\t\t%d\n", n, n * n, n * n * n);
    }

    return 0;
}

