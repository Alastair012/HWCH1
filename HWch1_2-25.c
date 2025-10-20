#include <stdio.h>

int main(void) {
    const char *Y[] = {
        "Y       Y",
        " Y     Y ",
        "  Y   Y  ",
        "   Y Y   ",
        "    Y    ",
        "    Y    ",
        "    Y    "
    };

    const char *B[] = {
        "BBBBBB  ",
        "B     B ",
        "B     B ",
        "BBBBBB  ",
        "B     B ",
        "B     B ",
        "BBBBBB  "
    };

    const char *C[] = {
        "  CCCCC ",
        " C     C",
        "C       ",
        "C       ",
        "C       ",
        " C     C",
        "  CCCCC "
    };

    int i;
    for (i = 0; i < (int)(sizeof(Y)/sizeof(Y[0])); ++i) {
        puts(Y[i]);
    }

    puts("");

    for (i = 0; i < (int)(sizeof(B)/sizeof(B[0])); ++i) {
        puts(B[i]);
    }

    puts("");

    for (i = 0; i < (int)(sizeof(C)/sizeof(C[0])); ++i) {
        puts(C[i]);
    }

    return 0;
}

