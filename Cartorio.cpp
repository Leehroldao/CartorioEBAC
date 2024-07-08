#include <stdio.h> //bliblioteca de comunicação com o usuário
#include <stdlib.h> //bliblioteca de alocação de espaço de memória
#include <locale.h> //bliblioteca de alocação de texto por região
#include <string.h> // biblioteca responsável por cuidar das string

int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s", cpf);
	
	strcpy(arquivo,cpf); // Responsavel por copiar os valores das string
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); // cria o arquivo
	fprintf(file,cpf); // salva o valor da variavel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado; ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
    file = fopen(arquivo, "a");
    fprintf(file,cargo);
	fclose(file);
	
	system("pause");
	
}

int consulta()
{   
    setlocale(LC_ALL, "Portuguese"); //Definindo a limguagem do menu
    
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("Não foi possivel abrir o arquivo, não localizado!.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas são as informações do usuário: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	system("pause");
	
		
}

int deletar()
{
	printf("Você escolheu deletar nomes!\n");
	system("pause");
}

int main()
{    
    int opcao=0; //Definindo variáveis
    int laco=1;
    
	for(laco=1;laco=1;)
	{
	     
	     system("cls");
	     
         setlocale(LC_ALL, "Portuguese"); //Definindo a limguagem do menu
    
         printf("### Cartório da EBAC ###\n\n"); // inicio do menu
         printf("Escolha a opção desejada do menu:\n\n");
         printf("1 - Registrar nomes \n");
         printf("2 - Consultar nomes \n");
         printf("3 - Deletar nomes \n\n");
		 printf("4 - Sair do sistema\n\n"); 
         printf("Opção: ");//fim do menu
   
         scanf("%d", &opcao); // armazenando a escolha do usuário
    
         system("cls");
         
         
         switch(opcao)
         {
         	case 1:
         	registro(); //chamada de funções
	        break;
			
			case 2:	
		    consulta();
	        break;
	        
	        case 3:
	        deletar();
	    	break;
	    	
	    	case 4:
			printf("Obrigado por utilizar o sistema!\n");
	    	return 0;
	    	break;
            	     	 
		    default:
		    printf("Essa opção não esta disponivel\n!");	
	        system("pause");
	        break;
		    
	     }
            
    
    }  
}
