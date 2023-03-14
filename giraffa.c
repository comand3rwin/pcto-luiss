//SCRIVERE UN PROGRAMMA CHE CHIEDA ALLÚTENTE DI INSERIE
//UN INT ETA E STAMPARE A SCHERMO IL VALORE

#include <stdio.h>
int main()

{
    int eta;
    char sesso;

    printf("Quanti anni hai?\n");
    scanf("%d", &eta);
        if (eta>18)
            {
            printf("sei maggiorenne\n");
            }
        else
            {
            printf("sei minorenne\n");
            }
    printf("sei maschio o femmina?\n");
    scanf(" %c", &sesso);
    char verifica;
    printf("hai davvvero %d annni? e sei %c?\n", eta, sesso);
    scanf(" %c", &verifica);
    if (verifica=='v')
        {
            printf("reggistrazione completat\n");
        }
    else
        {
            printf("stai mentendo scemo\n");
        }
    

    
    
}