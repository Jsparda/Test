#include <stdio.h>
#include <stdlib.h>

int main(){
	//Seccion de declaracion de varibales y apuntadores.
	int opcion, opcionsm,numop,i,auxiliarop,dig; //opcion es para el menu principal y opcionsm es para los submenus.
	int j=0,cont=1;
	int **operando; //declaracion de los apuntadores
	char *ch;

	//Seccion de menu.
	do{
		printf("Bienvenido a la calculadora de sistema de numeracion (2,8,16)\n");
		printf("1. Suma\n");
		printf("2. Resta\n");
		printf("3. Salir del programa\n");
		printf("Elige una opcion anterior: ");
		scanf("%d",&opcion);
		if(opcion == 1){
			//Seccion de suma
			do{
				printf("---------------------------\n");
				printf("Menu para realizar sumas\n");
				printf("1. Sumas en Sistema de Numeracion Binario\n");
				printf("2. Sumas en Sistema de Numeracion Octal\n");
				printf("3. Sumas en Sistema de Numeracion Hexadecimal\n");
				printf("4. Regresar al menu anterior\n");
				printf("Seleccione una de las opciones anteriores: ");
				scanf("%d",&opcionsm);
				if(opcionsm == 1){
					//suma en binario
					printf("Proporcione el numero de operandos que tendra la suma de binarios\n");
					printf("NOTA: el numero maximo de operandos debe ser 20...\n");
					scanf("%d",&numop); //Escaneo el numero de operadores 
					if(numop > 0 && numop <21){ //pregunto si es valido el numero de operadores
						operando=(int *) malloc(sizeof(int) * numop);//si es valido, reservo memoria para los numop operandos
						printf("Ingreso de los operandos\n");
						printf("La logitud de cada operando debe ser como maximo 30\n");
						for(i=0;i<numop;i++){ //ciclo para preguntar los operandos
							operando=(int *)malloc(sizeof(int)*30);//reservo memoria para la matriz de operandos
							printf("ingrese el operando #%d: ",(i+1));
							scanf("%d",&auxiliarop);//lee el numero binario completo
							while(auxiliarop>0){//este ciclo descompones el numero binario en digitos
								dig=auxiliarop%10; 
								if(dig == 0 || dig == 1){//Condicion de pertenencia al sistema binario
									operando[i][j]=dig;//una vez partidos, se guardan en la matriz
									j++;
								}
								else{
									printf(" %d no es parte del sistema binario",dig);
									break;
								}
							}
							j=0;
						}
						for(i=sizeof(operando);i>=0;i--){ //impresion de la matriz de operandos
							printf("Operando #%d: [ ",cont);
							for(j=sizeof(operando);j>=0;j++){
								//printf("Opernado #%d : [ ",cont);
								printf("%d ",operando[i][j]);
								//cont++;
							}
							printf(" ]\n");
							cont++;
						}
					}
					else
						printf("Fuera de rango permitido...\n");
				}
				else if(opcionsm == 2){
					//Suma en octal
					printf("Proporcione el numero de operandos que trendra la suma de octales\n");
					printf("NOTA: el numero maximo de operandos debe ser 20...\n");
				}
				else if(opcionsm == 3){
					//suma en hexadecimal
					printf("Proporciones el numero de operandos que tendra la suma de hexadecimales\n");
					printf("NOTA: el numero maximo de operandos debe ser 20...\n");
				}
				else if(opcionsm == 4){
					//salida del submenu de suma
					printf("<<<<<Regresando al menu principal>>>>>\n");
					printf("Presione una tecla para continuar\n");
					scanf("%s",ch);
				}
				else {
					printf("opcion invalida; elija una opcion valida...\n");
				}

			}
			//opcionsm=0;
			while(opcionsm != 4);
			opcionsm=0;
			ch="";
		}//fin menu sumas
		else if(opcion == 2){
			//seccion de resta
			do{
				printf("-----------------------------\n");
				printf("Menu para realizar restas\n");
				printf("1. Resta en Sistema de Numeracion Binario\n");
				printf("2. Resta en Sistema de Numeracion Octal\n");
				printf("3. Resta en Sistema de Numeracion Hexadecimal\n");
				printf("4. Regresar al menu anterior\n");
				printf("Seleccione una de las opciones anteriores\n");
				scanf("%d",&opcionsm);
				if(opcionsm == 1){
					//resta en binario
					printf("Proporcione el numero de operandos que tendra la resta de binarios\n");
					printf("NOTA: el numero maximo de operandos debe ser 20...\n");
					//if(ope)
				}
				
				else if(opcionsm == 2){
					//resta en octal
					printf("Proporcione el numero de operandos que tendra la resta de octales\n");
					printf("NOTA: el numero maximo de operandos debe ser 20...\n");
				}
				else if(opcionsm ==3){
					//resta en hexadecimal
					printf("Proporcione el numero de operandos que tendra la resta de hexadecimales\n");
					printf("NOTA: el numero maximo de operandos debe ser 20...\n");
				}
				else if (opcionsm == 4){
					//salida del submenu de resta
					printf("<<<<<Regresando al menu anterior>>>>>\n");
					printf("Presione una tecla para continuar\n");
					scanf("%s",ch);
				}

				else{
					printf("Opcion invalida; elija una opcion valida...");
				}
			}
			while(opcionsm != 4);
			opcionsm=0;
			ch="";
		}//fin menu resta
		else if(opcion == 3){
			//break;
		}//salida del programa
		else{
			//si introduce cualquier otra cosa, lanza mensaje de error
			printf("opcion invalida; vuelve a intentarlo\n");
		}//fin else
	}//fin do
	while(opcion != 3);
	printf("Saliendo del programa... \n");
return 0;
}
			

