#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main ()
{
  int opcao, resposta;
  
  printf ("Escolha a opcao desejada:\n");
  printf (" 1- Easy\n 2- Medium\n 3- Hard\n 4- Expert\n");
  scanf("%d", &opcao);
      
  switch ( opcao )
  {
    case 1 :
    printf ("Seu noob\n");
    
    printf ("O que significa a sigla HD?\n");
    printf (" 1- HARD DISK\n 2- HIGH DEFINITION\n 3- HI DEMON\n");
    
    scanf("%d",&resposta);
    	switch (resposta)
		{
			case 1 :
    		printf ("Acerto mizeravi\n");
    		main();
    		break;
    		    	
    		case 2 :
    		printf ("Wrong\n");
    		main();
    		break;
    		
    		case 3 :
    		printf ("Wrong\n");
    		main();
    		break;
    		    	    
		}
    
    main();
    break;
    
    case 2 :
    printf ("Ainda e noob\n");
    main();
    break;
    
    case 3 :
    printf ("Ta quase\n");
    main();
    break;
    
    case 4 :
    printf ("Merece meu respeito\n");
    main();
    break;
           
    default :
    printf ("bitch dont kill my vibe\n");
    main();
  }
  
}
