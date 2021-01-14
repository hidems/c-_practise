    #include <stdio.h>
     
    int main(void)
    {
         int n, data[100], *p;
         printf("数を入力してください->");
         scanf("%d", &n);
         p = data;
         while (n >= 0) {
             *p = n;
              p++;
             printf("数を入力してください->");
             scanf("%d", &n);
         }
         while (p > data) {
             p--;
         printf("%d\n", *p);
         }
    }