/*Escreva um programa que declare um array de inteiros com 5 elementos e um ponteiro para o 
primeiro elemento do array. Em seguida, preencha o array com valores informados pelo usu�rio e 
imprima esses valores utilizando o ponteiro. Ao final, mostre em tela cada valor armazenado e seu respectivo endere�o de mem�ria. */
#include <stdio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
		int v[5];
		int *pt;
		
		printf("Valores e Endere�oes \n");
		for(int i = 0; i < 5; i++){
			printf("Valor: ");
			scanf("%d", &v[i]);
		}
		
		pt = v;
		
		for(int j = 0; j < 5; j++){
			printf("\nValor: %d", *(pt+j));
			printf("\nEndere�o: %p \n", pt+j);
		}
		
		return 0;
	}
	
	
	
	
	
	
	
