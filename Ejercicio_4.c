
//Cruz Apodaca Amiel Merari//
//En este programa se le solicitara al usuario numeros, este programa terminara tras haber introducido 10 numeros o que la suma de los numeros introducidos se mayor que 100//
#include <stdio.h>

int main() {
  int num, cont = 0, sum = 0;
  while (cont < 10 && sum <= 100) {
     printf("Introduce un numero: ");
     scanf("%d", &num);

     sum += num;

    if (sum > 100) {
      printf("La suma de los numeros introducidos es mayor que 100.\n");
      break;
    }
    cont++;
  }
  if (cont == 10) {
     printf("Se han introducido 10 numeros.\n");
  }
  
    return 0;
}
