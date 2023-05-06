#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <Windows.h>



int main (){
	

	int inicio, limite, inter, p=1, timer;
	
	printf("digite o tempo do contador em MS:  ");
	scanf("%d",&timer);
	
	printf("digite o inicio do contador:  ");
	scanf("%d",&inicio);
	
	printf("digite o intervalo do contador:  ");
	scanf("%d",&inter);
	
	printf("digite o limite do contador:  ");
	scanf("%d",&limite);
			
	while (inicio <= limite ){

	Sleep(timer);
	
	printf("%d Contador: %d \n", p , inicio);
	
	inicio+=inter;
	p++;

	}	
}
