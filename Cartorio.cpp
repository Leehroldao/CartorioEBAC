#include <stdio.h> //bliblioteca de comunica��o com o usu�rio
#include <stdlib.h> //bliblioteca de aloca��o de espa�o de mem�ria
#include <locale.h> //bliblioteca de aloca��o de texto por regi�o

int main()
{    
    int opcao=0; //Definindo vari�veis
    int laco=1;
    
	for(laco=1;laco=1;)
	{
	     
	     system("cls");
	     
         setlocale(LC_ALL, "Portuguese"); //Definindo a limguagem do menu
    
         printf("### Cart�rio da EBAC ###\n\n"); // inicio do menu
         printf("Escolha a op��o desejada do menu:\n\n");
         printf("1 - Registrar nomes \n");
         printf("2 - Consultar nomes \n");
         printf("3 - Deletar nomes \n\n"); 
         printf("Op��o: ");//fim do menu
   
         scanf("%d", &opcao); // armazenando a escolha do usu�rio
    
         system("cls");
         
         
         switch(opcao)
         {
         	case 1:
         	printf("Voc� escolheu o registro de nomes!\n");
	        system("pause");
			break;
			
			case 2:	
		    printf("Voc� escolheu consultar os nomes!\n");
	        system("pause");
	        break;
	        
	        case 3:
	        printf("Voc� escolheu deletar nomes!\n");
	        system("pause");
			break;	
		    
		    default:
		    printf("Essa op��o n�o esta disponivel\n!");	
	        system("pause");
	        break;
		    
	     }
            
    
    }  
}
