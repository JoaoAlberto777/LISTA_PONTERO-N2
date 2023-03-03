#include <stdio.h>
#include <locale.h>


	int main(){
		setlocale (LC_ALL, "Portuguese_Brazil");
  		int a, b;
  		int *ptA = &a;
  		int *ptB = &b;

  		printf("Digite o valor de a: ");
  			scanf("%d", ptA);
  		
  		printf("Digite o valor de b: ");
  			scanf("%d", ptB);
  		
  		*ptA = *ptA + *ptB;
  		*ptB = *ptA - *ptB;
  		*ptA = *ptA - *ptB;

  		printf("Valor de a = %d, Valorde b = %d\n", a, b);

  	return 0;
}









