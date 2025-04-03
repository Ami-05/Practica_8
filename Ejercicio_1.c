
//Cruz Apodaca Amiel Merari//
//En este programa tras pedir una cantidad al usuario determinara el ultimo valor par y el ultimo valor impar//
#include <stdio.h>

int main()
{
    int par,impar,n, cont = 1;
    
    printf("Introduzca la cantidad de numeros;\n");
    scanf("%d",&n);
    printf("\nUso del wuhile\n");
    
    while (cont <= n)
    {
        if (cont % 2 == 0)
        {
            par = cont;
        }
        else 
        {
            impar = cont;
        }
        cont++;
    }
    printf("El ultimo numero par es: %d\n", par);
    printf("El ultimo numero impar es %d\n", impar);
    
    printf("\nUso del do-while\n");
    cont = 0;
    
    do
    {
        if (cont % 2 == 0)
        {
            par = cont;
        }
        else 
        {
            impar = cont;
        }
        cont++;
    }
    while(cont <= n);
    printf("El ultimo numero par es: %d\n", par);
    printf("El ultimo numero impar es %d\n", impar);
    
    return 0;
}
