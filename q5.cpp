/*Escreva um programa que declare uma vari�vel real e um ponteiro para essa vari�vel. 
Em seguida, preencha a vari�vel com um valor real informado pelo usu�rio e utilize o ponteiro para calcular o dobro desse valor. 
Por fim, utilize o ponteiro para imprimir na tela o valor original e o dobro calculado. */

#include <stdio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
    	float real, *ptR;
    
    	printf("Digite um valor real: ");
    	scanf("%f", &real);
    
    	ptR = &real;  //recebe o endere�o de real
    
    	  
    	printf("O valor original �: %.1f\n", *ptR);
    	printf("O dobro do valor � %.1f\n", *ptR*2);  
    
    return 0;
}

