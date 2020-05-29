#include <stdio.h>
#include <stdlib.h>

void main(){
	int i,n,dig;
	int *vector;
	printf("Escribe un numero: ");
	scanf("%d",&n);
	i=0;
	while(n>0){
		dig=n%2;
		vector[i]=dig;
		n/=2;
		printf("%d ",dig);
		i++;
	}
	printf("\n");
	printf("----------------\n");
	for(int j=(i-1);j>(-1);j--)
		printf("%d ",vector[j]);
	printf("\n");
	free(vector);
}

