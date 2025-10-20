#include <stdio.h>

int main(void)
{
    int x;
    printf("Please enter an integer to determine whether it is even or odd¡G");
    scanf("%d", &x);
    if (x % 2 == 0)
        printf("%d even\n", x);
    else
        printf("%d ¬Oodd\n", x);
    return 0;
}
