#include <stdio.h>

int main(){
	
	int aula[5],valor;
	

	
	for(int i = 1; i<=5; i++){
		
		printf("%d valor \n",i);
		scanf("%d",&aula[i]);
	}
	
	for(int i = 1; i<=5; i++){
		
		printf("Aluno %d %d \n",i, aula[i]);
	}
}
