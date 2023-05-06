#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>



int main (){
	

	int a, b,soma,continua=1;
	
	while(continua == 1){
	
		system("color 0a");
		
		system("cls");
	printf("digite o primeiro valor: ");
	scanf("%d",&a);
	
	printf("digite o segundo valor:  ");
	scanf("%d",&b);
	
	soma = a+b;

	printf("Valor da soma %d", soma);
	
	printf("Deseja continuar \n digite: \n 1 para sim.\n 2 para não.  ");
	scanf("%d",&continua);	
	
	}	
	
	
}
