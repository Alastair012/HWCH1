#include <stdio.h>

int main(void)
{
    double w, h, bmi;

    printf("請輸入體重(公斤)和身高(公尺)：");
    scanf("%lf %lf", &w, &h);

    bmi = w / (h * h);
    printf("BMI = %.1f\n", bmi);

    if (bmi < 18.5)
        printf("體重過輕\n");
    else if (bmi < 25.0)
        printf("正常\n");
    else if (bmi < 30.0)
        printf("過重\n");
    else
        printf("肥胖\n");

    return 0;
}

