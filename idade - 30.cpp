#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int idade, contmais21, contmenos21;
	int contador;
	
	contmais21 = 0;
	contmenos21 = 0;
	contador = 1;
	
	while (contador<=30)
	{
		printf ("Digite a idade da pessoa %d\n", contador);
			scanf ("%d", &idade);
			if (idade >= 21)
			{ contmais21++; }
			else if (idade<21)
			{ contmenos21++; }
			contador++;
	}
	printf ("total menores de 21 anos %d\n", contmenos21);
	printf ("total maiores de 21 anos %d\n", contmais21);
	return 0;
}