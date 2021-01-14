#include <stdio.h>
int main(void)
{
    int n, data[100], i = 0;

    do{
        printf("Input number->");
        scanf("%d", &n);
        data[i] = n;
        i++; 
    }while(n >= 0);

    while(i > 0){
        i--;
        printf("%d\n", data[i]);
    }

}