#include <stdio.h>

int main(void)
{
    int a, b;

    printf("�п�J��Ӿ�ơG");
    scanf("%d %d", &a, &b);

    if (b == 0) {
        printf("���~�G���Ƥ��ର 0�C\n");
        
    } else if (a % b == 0) {
        printf("%d �O %d �����ơC\n", a, b);
        
    } else {
        printf("%d ���O %d �����ơC\n", a, b);
    }

    return 0;
}

