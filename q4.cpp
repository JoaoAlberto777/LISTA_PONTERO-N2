#include <stdio.h>
#include <locale.h>
	
	int main(){
		setlocale (LC_ALL, "Portuguese_Brazil");
		int n, v[n], *pt;
		
		printf("Informe o tamanho do vetor: ");
		scanf("%d", &n);
		
		for(int i = 0; i < n; i++){
			printf("informe os elementos do vetor: ");
			scanf("%d", &v[i]);
		}
		pt = v;
		
		for(int j = n; j > 0; j--){
			printf("%d ", *(pt + (j - 1)));
		}
		return 0;
	}












