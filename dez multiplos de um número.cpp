#include <stdio.h>
#include <stdlib.h>
int main ()

{
	int num_i, multi, x, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, soma;
	
	printf ("Digite um numero inteiro qualquer:");
	scanf ("%d", &num_i);
	
  x1 = num_i * 1;
   printf ("\n Seu numero multiplicado por 1 e %d", x1);
  x2 = num_i *2;
   printf ("\n Seu numero multiplicado por 2 e %d", x2);
  x3 = num_i * 3;
   printf ("\n Seu numero multiplicado por 3 e %d", x3);
  x4 = num_i * 4;
   printf ("\n Seu numero multiplicado por 4 e %d", x4);
  x5 = num_i * 5;
   printf ("\n Seu numero multiplicado por 5 e %d", x5);
  x6 = num_i * 6;
   printf ("\n Seu numero multiplicado por 6 e %d", x6);
  x7 = num_i * 7;
    printf ("\n Seu numero multiplicado por 7 e %d", x7);
  x8 = num_i * 8;
   printf ("\n Seu numero multiplicado por 8 e %d", x8);
  x9 = num_i * 9;
   printf ("\n Seu numero multiplicado por 9 e %d", x9);
  x10 = num_i * 10;
   printf ("\n Seu numero multiplicado por 10 e %d", x10);
   
   soma = x1+x2+x3+x4+x5+x6+x7+x8+x9+x10;
   printf ("\n A soma dos multiplos e %d\n", soma);
  
  
  return 0;
}