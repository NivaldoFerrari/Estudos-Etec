#include<stdio.h>

int main() 
{
	int i=1, valor=0, candidato1=0,candidato2=0, mediMin=5, qtdEleitor=10;

	
	while(i <= qtdEleitor )
	{
		printf("Qual o candidato vc vai  votar?\n Digite 1 para Jo�o \n Digite 2 para Anderson \n" );
		scanf("%d", &valor );
		if(valor == 1)
		{
			candidato1++;
		}else{
			candidato2++;
		}
		i++;
		
	}
	printf("candidato 1 recebeu: %d votos \n candidato 2 recebeu: %d votos ",candidato1,candidato2);
	
	

}
