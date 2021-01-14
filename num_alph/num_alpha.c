#include <stdio.h>
#include <ctype.h>
#include <string.h>

void num_alpha(const char str[], int* num, int* al)
{
    const char *p;  
    int acnt = 0, bcnt = 0;

    for(p = str; *p != '\0'; p++){
        if(isalpha(*p)) acnt++;
        else if(isdigit(*p)) bcnt++;
    }

    *num = bcnt;
    *al = acnt;
}

int main(void)
{
    char word[50];
    int *num, *al;
    
    printf("Input a word->");
    scanf("%s", word);

    num_alpha(word, num, al);

    printf("number: %d and alphabet: %d\n", *num, *al);
}