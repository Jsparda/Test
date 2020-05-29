#include <stdio.h>
#include <stdlib.h>

int main(){
	char *Cadena;

	printf("la direccion del apuntador *Cadena es = %p \n", &Cadena);
	
	Cadena = (char *) malloc(sizeof(char)*8);

	printf("la direccion de cadena[0] es %p \n", &Cadena[0]);
	printf("el valor de cadena[0] es %d \n", Cadena[0]);

	printf("la direccion del apuntador *Cadena es = %p \n",&Cadena);
	printf("El valor del apuntador *Cadena es %d \n",*Cadena);

	printf("Proporciona una cadena: ");
	gets(Cadena);

	printf("las direcciones y valores \n");
	
	while(*Cadena != '\0'){
		printf("la direccion del apuntador es %p \n",Cadena);
		printf("el valor del apuntador es %c \n", *Cadena);
		Cadena++;
	}

	return 0;
}
