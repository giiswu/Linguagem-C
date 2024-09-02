#include <stdio.h>
#include <stdlib.h>
int main()

{
	
	int num =0;
	int contador = 1;
	int quadrado;
	
		printf ("Digite um numero qualquer positivo:");
    	scanf ("%d", &num);
    	
    	printf ("Os quadrados dos numeros de 1 ate %d sao; \n", num);
	
		while (contador <= num) { 
		
		quadrado  = contador * contador;
		
		
			printf ("%d ao quadrado e: %d\n", contador, quadrado);
			
			contador++;
			
			}

	return 0;
}