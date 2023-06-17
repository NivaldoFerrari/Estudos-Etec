#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int vendedores=5, i,comissao=0,metaUm=5000,metaDois=10000, metaTres=15000,salarioBase=2500,salario=salarioBase;
	float vendas=0, comissaoUm=0.02, comissaoDois=0.04, comissaoTres=0.06;
	for(i=1; i<=vendedores; i++){
		printf("Vendedor %d quanto voce vendeu?\n" ,i);
		scanf("%f",&vendas);
		
		if(vendas<=metaUm){
			printf("Voce nao bateu a meta ira receber apenas o seu salario R$%d\n" ,salario);
		}else if(vendas>=metaUm && vendas<=metaDois){
			comissao=vendas*comissaoUm;
			printf("Parabens voce bateu a primeira meta sua comissao e 2 porcento, de:%d\n", comissao);
			
			salario+=comissao;
			printf("Seu salario esse mes  sera de:%d\n",salario);
			salario=salarioBase;
		
		}else if(vendas>=metaDois && vendas<=metaTres){
			comissao=vendas*comissaoDois;
			printf("Parabens voce bateu a segunda meta sua comissao e 4 porcento, de:%d\n", comissao);
			
			salario+=comissao;
			printf("Seu salario esse mes  sera de:%d\n",salario);
			salario=salarioBase;
			
		}else if(vendas>metaTres){
			comissao=vendas*comissaoTres;
			printf("Parabens voce bateu a terceira meta sua comissao e 6 porcento, de:%d\n", comissao);
			
			salario+=comissao;
			printf("Seu salario esse mes  sera de:%d\n",salario);
			salario=salarioBase;
		
		}
		
	}


	

	
}
