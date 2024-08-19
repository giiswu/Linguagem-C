#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int num;
	
	printf ("Escolha um numero\n");
	
	do{

	printf ("[1]\n");
	printf ("[2]\n");
	printf ("[3]\n");
	printf ("[4]\n");
	printf ("[5]\n");
	scanf ("%d", &num);
	
	switch (num){
	
	
	  case 1: 
		printf ("Entrada valida, pois seu numero e %d\n", num);
		break;
	
		case 2:
			printf ("Entrada valida, pois seu numero e %d\n", num);
			break;
			
			case 3:
	    	printf ("Entrada valida, pois seu numero e %d\n", num);
		    break;	
		    
		    case 4:
		    	printf ("Entrada valida, pois seu numero e %d\n", num);
		    	break;
		    	
		    	case 5:
	    		printf ("Entrada valida, pois seu numero e %d\n", num);
		    	break;	
		    
		    	
				}
    
    printf ("Entrada invalida");
		
	}while (num<0 || num>5);


	return 0;
}