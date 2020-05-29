#include <stdio.h>
#include <stdlib.h>

void main(){
	int operandos;
	char *operando;
	printf("Cuantos operandos requieres? \n");
	scanf("%d",&operandos);

	operando=(char*)malloc(sizeof(char)*operandos);

	printf("Escribe un numero en binario: \n");
	gets(*operando);
	printf("tu binario es: ");
	while(*operando!='\0'){
		printf("%c ",*operando);
		operandos++;
	}

}
