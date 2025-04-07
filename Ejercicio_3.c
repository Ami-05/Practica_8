//Cruz Apodaca Amiel Merari//
//En este programa se le pide al usuario un numero, el cual posteriormente se imprime con la leyenda "has introducido el numero ..." //
//esta accion se repetira hasta que se introduzca el numero 0, una vez introducido el 0 se mostrara la siguiente leyenda://
//"Finalizando: Se ha introducido el numero 0", ademas se mostrara la cantidad de numeros introducidos y su suma//
#include <stdio.h>

int main() {
  int num, cont = 0, sum = 0;
  do {
     printf("Introduce un numero (si quieres terminar el programa ingresa 0): ");
     scanf("%d", &num);
     printf("Has introducido el numero %d\n", num);

     if (num != 0) {
       sum += num;
       cont++;
     }
    } while (num != 0);

    printf("Finalizando: Se ha introducido el numero 0\n");
    printf("Se han introducido %d numeros con una suma de %d\n", cont, sum);
  
    return 0;
}
