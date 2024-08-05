#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()

{
	SetConsoleOutputCP(CP_UTF8);
	
		float pre, pre_total, pre_total2;
		
			printf ("Qual o custo do produto comprado?\nR$");
				scanf ("%f", &pre);
			
			if (pre < 20)
			{
				pre_total = pre + (pre/20)*9 ;
				printf ("\nSeu lucro é de 45%, totalizando: %.2f", pre_total);
			}
			else 
			{
				pre_total2 = pre + (pre/20*6);
				printf ("\nSeu lucro é de 30%, totalizando: %.2f", pre_total2);
			}
	return 0;
}