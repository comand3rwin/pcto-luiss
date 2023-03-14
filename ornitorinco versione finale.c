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
        else if (eta==18)        
            {
                printf ("sei appena maggiorenne\n");    
            }
        else
            {
                printf("sei minorenne\n");
            }   
    
    
    printf("sei maschio o femmina?\n");
        scanf(" %c", &sesso);
        if (sesso=='m')
            {
                char verifica;
                    printf("hai davvvero %d anni? e sei maschio?\n", eta);
                    scanf(" %c", &verifica);
                    if (verifica=='v')
                    {
                        printf("registrazione effetuata con sucesso");
                    }
                    else
                    {
                        printf("stai mentedo scemo");
                    }
            }
        else if (sesso=='n')
            {
                  char verifica;
                    printf("hai davvvero %d anni? e sei non binario?\n", eta);
                    scanf(" %c", &verifica);
                    if (verifica=='v')
                    {
                        printf("registrazione effetuata con sucesso");
                    }
                    else
                    {
                        printf("stai mentedo scemo");
                    }
            }
        else if (sesso=='f')
            {
             char verifica;
                    printf("hai davvvero %d anni? e sei non binario?\n", eta);
                    scanf(" %c", &verifica);
                    if (verifica=='v')
                    {
                        printf("registrazione effetuata con sucesso");
                    }
                    else
                    {
                        printf("stai mentedo scemo");
                    }
            }
        else 
            {
                printf("impossibile completare la reggistrazione, sesso non identificato\n");
            }



}
