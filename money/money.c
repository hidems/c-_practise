#include <stdio.h>
int main(void)
{
    int yen, i;
    int unit[] = {10000, 5000, 1000, 500, 100, 50, 10, 5, 1};
    char *s[] = {"札", "札", "札", "玉", "玉", "玉", "玉", "玉"};
    printf("金額を入力してください->");
    scanf("%d", &yen);
    for (i = 0; unit[i] > 1; i++) {
        printf("%5d円%sは%d枚\n" ,unit[i], s[i], yen / unit[i]);
        yen %= unit[i];
    }
    printf("    1円玉は%d枚\n", yen);
    return 0;
}