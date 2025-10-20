#include <stdio.h>

int main(void)
{
    double distance, fuel_price, efficiency;
    double parking, toll;

    printf("請輸入每日行駛公里數：");
    scanf("%lf", &distance);

    printf("請輸入每公升油價：");
    scanf("%lf", &fuel_price);

    printf("請輸入每公升可行駛公里數（km/L）：");
    scanf("%lf", &efficiency);

    printf("請輸入每日停車費：");
    scanf("%lf", &parking);

    printf("請輸入每日過路費：");
    scanf("%lf", &toll);

    double fuel_used = distance / efficiency;
    double fuel_cost = fuel_used * fuel_price;
    double total = fuel_cost + parking + toll;

    printf("\n每日油耗：%.2f 公升\n", fuel_used);
    printf("每日燃料費：%.2f 元\n", fuel_cost);
    printf("每日停車與過路費：%.2f 元\n", parking + toll);
    printf("每日總花費：%.2f 元\n", total);

    return 0;
}

