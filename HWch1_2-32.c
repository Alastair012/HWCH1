#include <stdio.h>

int main(void)
{
    double w, h, bmi;

    printf("�п�J�魫(����)�M����(����)�G");
    scanf("%lf %lf", &w, &h);

    bmi = w / (h * h);
    printf("BMI = %.1f\n", bmi);

    if (bmi < 18.5)
        printf("�魫�L��\n");
    else if (bmi < 25.0)
        printf("���`\n");
    else if (bmi < 30.0)
        printf("�L��\n");
    else
        printf("�έD\n");

    return 0;
}

