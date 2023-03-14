#include <stdio.h>

int main ()
{
    int anno;
    printf("che anno vuoi calcolare?\n");
    scanf("%d", &anno);
    if (anno%400==0)
    {
        printf("bisestile\n");
    }
    else
    {
        printf("non bisestile\n");
    }
}