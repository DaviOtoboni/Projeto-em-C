#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	char ex;
	
	do{
		printf("Digite um número:\n");
		scanf("%d", &num);
		fflush(stdin);
	
		if (num > 0){
				printf("Este número é positivo.\n");	
		} else {
			if(num < 0){
				printf("Este número negativo.\n");
			}else{
				printf("Este número não é positivo e nem mesmo negativo.\n");
			}
		}
		printf("Digite S caso queira executar novamente.\n");
		scanf("%c", &ex);
		fflush(stdin);
	}while (ex == 'S' || ex == 's');
}
