#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	char ex;
	
	do{
		printf("Digite um n�mero:\n");
		scanf("%d", &num);
		fflush(stdin);
	
		if (num > 0){
				printf("Este n�mero � positivo.\n");	
		} else {
			if(num < 0){
				printf("Este n�mero negativo.\n");
			}else{
				printf("Este n�mero n�o � positivo e nem mesmo negativo.\n");
			}
		}
		printf("Digite S caso queira executar novamente.\n");
		scanf("%c", &ex);
		fflush(stdin);
	}while (ex == 'S' || ex == 's');
}
