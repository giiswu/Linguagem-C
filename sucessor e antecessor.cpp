#include <stdio.h>
#include <stdlib.h>

int main ()

{
	float N1, Res1 , Res2;
	
	printf ("Digite um numero qualquer: ");
	scanf ("%f", &N1);
	
	Res1= N1 * 0.19;
	Res2= N1 * 0.18;
	
	printf ("Seu numero em dolar e %f\n" , Res1);
	printf ("Seu numero em euro e %f\n" , Res2);
}