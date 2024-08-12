#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int A, B, operacao, conta;
	printf ("Digite o seu primeiro numero:");
	scanf ("%d", &A);
	printf ("Digite o seu segundo numero:");
	scanf ("%d", &B);

	printf ("[1] soma \n");
	printf ("[2] subtracao \n");
	printf ("[3] multiplicacao \n");
	printf ("[4] divisao \n");
	scanf ("%d", &operacao);
	
	while (operacao>4)      
	{printf ("opcao invalida");
	}   
	
	switch (operacao)
	{case 1:
		conta = A+ B; 
		printf ("O resultado da sua soma e %d\n", conta);
		break;
	
		case 2:
			conta = A- B;
			printf ("O resultado da sua subtracao e %d\n", conta);
			break;
			
			case 3:
			conta = A* B;
	    	printf ("O resultado da sua multiplicacao e %d\n", conta);
		    break;	
		    
		    case 4:
		    	conta = A/ B;
		    	printf ("O resultado da sua divisao e %d\n", conta);
		    	break;
		    	
				}
	

	return 0;		
}