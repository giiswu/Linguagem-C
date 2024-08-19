#include <stdio.h>
#include <stdlib.h>
int main ()

{
	int num, multiplo, indice, soma;
	
	printf ("Digite um numero");
		scanf ("%d", &num);
		
		indice=1;
		soma=0;
		
			while (indice <=20)
			{
				multiplo = indice * num;
				printf ("Feito o looping a variavel indice vale %d\n", indice);
				printf ("Multiplos de %d sao %d\n\n", num, multiplo);
				
				soma= soma+multiplo;
				//soma += multiplo;
				// indice++;
					indice= indice +1;
			}
			
			printf ("Resultado da soma dos multiplos %d\n", soma);
			return 0;
}