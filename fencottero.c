#include <stdio.h>

int main()
{
    int x;
    int y;
    int z; 
    printf("inserisci i numeri in progressione\n");
    scanf("%d %d %d", &x , &y , &z);
    if(x-y==y-z)
    {
        printf("è una progressione artmetica\n");
    }
    else
    {
        printf("non è una progressione artmetica\n");
    }
}
