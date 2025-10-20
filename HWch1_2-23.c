#include <stdio.h>

int main(void)
{
    int x, y, z;
    printf("Enter three integers: ");
    scanf("%d %d %d", &x, &y, &z);

    int largest = x;
    int smallest = x;

    if (y > largest) largest = y;
    if (z > largest) largest = z;

    if (y < smallest) smallest = y;
    if (z < smallest) smallest = z;

    printf("Largest: %d\nSmallest: %d\n", largest, smallest);
    return 0;
}
