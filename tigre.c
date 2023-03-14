#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
     
    printf("inserisci i lati\n");
    scanf("%d %d %d", &x , &y , &z);
    if (x+y>z&&y+z>x&&x+z>y)
    {
    if (x==y&&y==z&&x==z)
    {
        printf("è equilatero\n");
    }
    else if (x==y||y==z||x==z)
    {
        printf("è isoscele\n");
    }
    else
    {
        printf("è scaleno\n");
    }
    }
    else
    {
        printf("non è un triangolo\n");
    }



}