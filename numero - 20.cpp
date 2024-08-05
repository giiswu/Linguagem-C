#include <stdio.h>
#include <stdlib.h>

int main ()

{
	int num;
	
	printf ("Digite um numero inteiro: ");
		scanf ("%d", &num);
	
	if (num == 20)
	{
		printf ("\nSeu numero e igual a 20");
	}
	
	else if (num > 20)
	{	
		printf ("\nSeu numero e maior que 20");
	}
	
	else
	{
		printf ("\nSeu numero e menor que 20");
	}
	
	return 0;
}