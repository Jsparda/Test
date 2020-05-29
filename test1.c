#include <stdio.h>
#include <stdlib.h>

void main(){
    int dig,i,j;
    long num;
    int *vector;
    printf("Escribe un numero en binario (de tamanio maximo 30): ");
    scanf("%ld",&num);
    printf("tu numero fue %d \n",num);
    vector = (int*)malloc(sizeof(int));
    i=0;
    //while(num>0){
    do{
        dig=num%10;
        vector[i]=dig;
        num=num/10;
        printf("%d ",dig);
        i++;
        printf("i = %d \n",i);
    }
    while (num>0);
    printf("\n");
    printf("----------------------------\n");
    for(j=(i-1);j>(-1);j--)
        printf("%d ",vector[j]);
    
}