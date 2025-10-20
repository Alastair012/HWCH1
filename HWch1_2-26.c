#include <stdio.h>

int main(void)
{
    int a, b;

    printf("請輸入兩個整數：");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("錯誤：除數不能為 0。\n");
        
    } else if (a % b == 0) {
        printf("%d 是 %d 的倍數。\n", a, b);
        
    } else {
        printf("%d 不是 %d 的倍數。\n", a, b);
    }

    return 0;
}

