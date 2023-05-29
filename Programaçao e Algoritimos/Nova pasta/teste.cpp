#include <stdio.h>

int main(){
	
	int acumulador, total,i;
	
	for(int i=1; i<=10; i++){
		printf("Digite um valor: \n");
		scanf("%d",&acumulador);
		
		total+=acumulador;
		
	
	}
	
	printf("Total igual a: %d",total);
}
