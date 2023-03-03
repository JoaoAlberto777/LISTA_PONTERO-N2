/*Escreva um programa que declare uma variável real e um ponteiro para essa variável. 
Em seguida, preencha a variável com um valor real informado pelo usuário e utilize o ponteiro para calcular o dobro desse valor. 
Por fim, utilize o ponteiro para imprimir na tela o valor original e o dobro calculado. */

#include <stdio.h>
#include <locale.h>

	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
    	float real, *ptR;
    
    	printf("Digite um valor real: ");
    	scanf("%f", &real);
    
    	ptR = &real;  //recebe o endereço de real
    
    	  
    	printf("O valor original é: %.1f\n", *ptR);
    	printf("O dobro do valor é %.1f\n", *ptR*2);  
    
    return 0;
}

