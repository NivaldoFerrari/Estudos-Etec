#include <stdio.h>

int main(){
	
	int aula[5],valor,total;
	

	
	for(int i = 1; i<=5; i++){
		
		printf("%d valor \n",i);
		scanf("%d",&aula[i]);
	}
	
	for(int i = 1; i<=5; i++){
		
		printf("Aluno %d %d \n",i, aula[i]);
	}
	
		for(int i = 1; i<=5; i++){
	
		total+=aula[i];
		
	}
	printf("Total %d  \n",total);
}
