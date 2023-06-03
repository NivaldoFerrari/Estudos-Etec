#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>

float soma(int a,int b){
	return(a+b);
}
float subtracao(int a,int b){
	return(a-b);
}
float multiplicacao(int a,int b){
	return(a*b);
}
float divide(int a,int b){
	return(a/b);
}
main(){
	
	int n1, n2, result;
	n2=0;
	n1=0;
	int op;
	
	printf("Digite o primeiro numero da operacao\n");
	scanf("%d",&n1);
	
	printf("Digite o segundo numero da operacao\n");
	scanf("%d",&n2);
	
	printf("Qual oprecao desejada \n(1)Somar\n(2)Subtrair\n(3)Multiplicacao\n(4)Divisao\n");
	scanf("%d",&op);
	
	switch (op){
	
		case 1:
			result=soma(n1,n2);
			break;
		case 2:
			result=subtracao(n1,n2);
			break;
		case 3:
			result=multiplicacao(n1,n2);
			break;
		case 4:
			if(n2%2==0.0)
       {
        result=divide(n1,n2);
       }
       else
       {
        printf("\nOperacao invalida, pois não existe divisao por zero\n");
       }
       break;
     default:
       printf("\nOperacao invalida!!!\n");
	
	}	
	
	printf("Resultado %d",result);
	getch();
}
