#include <stdio.h>

// Function declarations
int recursionEx05(int);
int recursionEx06(int);
int recursionEx07(int);
int recursionEx08(int);
double recursionEx09(double);
int recursionEx10(int);
int recursionEx11(int);
int recursionEx12(int);
int recursionEx15(int);
int recursionEx16(int);

int main() {
    // 01
    printf("Ex05: %d\n", recursionEx05(2));
    for (int x = 0; x <= 8; x += 2)
        printf("x = %d\n", x);
    // 02
    printf("Ex06: %d\n", recursionEx06(0));
    for (int x = -1; x < 8; x += 3)
        printf("x = %d\n", x);
    // 03
    printf("Ex07: %d\n", recursionEx07(1));
    for (int x = 1; x < 100; x *= 3)
        printf("x = %d\n", x);
    // 04
    printf("Ex08: %d\n", recursionEx08(200));
    for (int x = 200; x >= 25; x /= 2)
        printf("x = %d\n", x);
    // 05
    printf("Ex09: %.1f\n", recursionEx09(39));
    for (double x = 0; x < 4; x += 0.5)
        printf("x = %.1f\n", x);
    // 06
    printf("Ex10: %d\n", recursionEx10(1));
    int y = 0;
    for (int x = 1; x <= 25; x += 3)
        y++;
    printf("y = %d\n", y);
    // 07
    printf("Ex11: %d\n", recursionEx11(2));
    y = 0;
    for (int x = 3; x > 0; x--)
        y++;
    printf("y = %d\n", y);
    // 08
    printf("Ex12: %d\n", recursionEx12(4));
    y = 0;
    int x = 0;
    while (x < 3) {
        y++;
        x = y;
    }
    printf("y = %d\n", y);
    // 09
    printf("Ex15: %d\n", recursionEx15(2));
    x = 2;
    while (x < 10) {
        if (x % 2 == 0)
            x += 3;
        else
            x += 2;
    }
    printf("x = %d\n", x);
    // 10
    printf("Ex16: %d\n", recursionEx16(4));
    x = 2;
    do {
        if (x % 2 == 0)
            x += 3;
        else
            x += 2;
    } while (x < 10);
    printf("x = %d\n", x);

    return 0;
}

// Function definitions
int recursionEx05(int x) {
    if (x <= 8)
        return recursionEx05(x + 2);
    return x;
}

int recursionEx06(int x) {
    if (x < 8)
        return recursionEx06(x + 3);
    return x;
}

int recursionEx07(int x) {
    if (x < 100)
        return recursionEx07(x * 3);
    return x;
}

int recursionEx08(int x) {
    if (x >= 25)
        return recursionEx08(x /= 2);
    return x;
}

double recursionEx09(double x) {
    if (x < 4)
        return recursionEx09(x + 0.5);
    return x;
}

int recursionEx10(int x) {
    if (x <= 25)
        return recursionEx10(x + 3);
    return x;
}

int recursionEx11(int x) {
    if (x >= 3)
        return recursionEx11(x - 1);
    return x;
}

int recursionEx12(int x) {
    if (x < 3)
        return recursionEx12(x + 1);
    return x;
}

int recursionEx15(int x) {
    if (x < 10) {
        if (x % 2 == 0)
            return recursionEx15(x + 3);
        else
            return recursionEx15(x + 2);
    }
    return x;
}

int recursionEx16(int x) {
    if (x < 10) {
        if (x % 2 == 0)
            return recursionEx16(x + 3);
        else
            return recursionEx16(x + 3);
    }
    return x;
}