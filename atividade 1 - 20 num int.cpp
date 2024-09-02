#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num;
	int controle = 1 ;
	int de_10_20 =0;
	int de_21_50 =0;
	int de_51_100 =0;
	int acima_100 =0;
	
	while (controle <= 20){
		printf ("Digite um numero inteiro:");
		scanf ("%d", &num);
		controle++;
		
		if (num>=10 && num<=20){
			de_10_20++;
		} else if (num>=21 && num<=50){
			de_21_50++;
		} else if (num>=51 && num<=100){
			de_51_100++;
		} else if (num>100){
			acima_100++;
		}
	}
	
printf ("\n Dos numeros escolhidos %d esta no intervalo entre 10 e 20", de_10_20);	
printf ("\n Dos numeros escolhidos %d esta no intervalo entre 21 e 50", de_21_50);
printf ("\n Dos numeros escolhidos %d esta no intervalo entre 51 e 100", de_51_100);
printf ("\n Dos numeros escolhidos %d sao acima de 100", acima_100);

return 0 ;

}