#include <stdio.h>

int main(void)
{
    double distance, fuel_price, efficiency;
    double parking, toll;

    printf("�п�J�C���p�����ơG");
    scanf("%lf", &distance);

    printf("�п�J�C���ɪo���G");
    scanf("%lf", &fuel_price);

    printf("�п�J�C���ɥi��p�����ơ]km/L�^�G");
    scanf("%lf", &efficiency);

    printf("�п�J�C�鰱���O�G");
    scanf("%lf", &parking);

    printf("�п�J�C��L���O�G");
    scanf("%lf", &toll);

    double fuel_used = distance / efficiency;
    double fuel_cost = fuel_used * fuel_price;
    double total = fuel_cost + parking + toll;

    printf("\n�C��o�ӡG%.2f ����\n", fuel_used);
    printf("�C��U�ƶO�G%.2f ��\n", fuel_cost);
    printf("�C�鰱���P�L���O�G%.2f ��\n", parking + toll);
    printf("�C���`��O�G%.2f ��\n", total);

    return 0;
}

