#include <stdio.h>
#include <locale.h>
#include <string.h>

#define TMAX 100
	int main() {
		setlocale(LC_ALL, "Portuguese_Brazil");
		int pos = 0;
		char str[TMAX], nova_str[TMAX], *pt;
		fgets(str, TMAX, stdin);
	
		pt = str;
	
		for(int i = 0; i < TMAX; i++){
			if(!*(pt + i) != 'a' && *(pt + i) != 'e' && *(pt + i) != 'i' && *(pt + i) != 'o' && *(pt + i) != 'u'){
			nova_str[pos] = *(pt + i);
			pos++;
			}
			if(*(pt + i) == '\0'){
			break;
			}
		}
		printf("A palavra sem vogais é: %s", nova_str);

		return 0;
}




