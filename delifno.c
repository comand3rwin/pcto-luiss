//SCRIVERE UN PROGRAMMA CHE CHIEDA ALLÚTENTE DI INSERIE
//UN INT ETA E STAMPARE A SCHERMO IL VALORE

#include <stdio.h>
int main()

{
    int eta;
    char sesso;

    printf("Quanti anni hai?\n");
    scanf("%d", &eta);
    printf("sei maschio o femmina?\n");
    scanf(" %c", &sesso);
    printf("hai davvvero %d annni? e sei %c?\n", eta, sesso);  
    
}
