#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>

float areaTrin(int a,int b){
	return(a*b)/2;
}
float multiplicacao(int a,int b){
	return(a*b);
}

main(){
	
	int n1, n2, result;
	n2=0;
	n1=0;
	int op;
	
	printf("Qual oprecao desejada \n(1)Area Retangulo\n(2)Quadrado\n(3)Triangulo\n");
	scanf("%d",&op);
	
	printf("Digite o primeiro numero da operacao\n");
	scanf("%d",&n1);
	
	printf("Digite o segundo numero da operacao\n");
	scanf("%d",&n2);
	

	switch (op){
	
		case 1:
			result=multiplicacao(n1,n2);
			break;
			case 2:
			result=multiplicacao(n1,n2);
			break;
		case 3:
			result=areaTrin(n1,n2);
			break;
	
     default:
       printf("\nOperacao invalida!!!\n");
	
	}	
	
	printf("Resultado %d",result);
	getch();
}
