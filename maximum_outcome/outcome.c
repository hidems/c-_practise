#include<stdio.h>

int maximum(int o[])
{
    int i, max = 0;

    for(i = 0; i < 12; i++ ){
        if(o[i] > max) max = o[i];
    } 

    return max;
}

int main(void)
{
    int max, outcome[] = {100, 200, 400, 200, 100, 600, 600, 700, 100, 300, 1200, 300};

    max = maximum(outcome);
    printf("%d\n", max);
}