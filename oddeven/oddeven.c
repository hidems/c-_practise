#include <stdio.h>
int main(void)
{
    int n, m;
    printf("Input number->");
    scanf("%d", &n);

    m = n % 2;

    if (n & 1) { //ビット単位のAND演算、1ビット目の判定をする。
        printf("Odd number\n");
    }
    else {
        printf("Even number\n");
}
}