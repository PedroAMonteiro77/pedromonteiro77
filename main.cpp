#include <stdio.h>//Fun��es de entrada e saida 
#include <locale.h>// Ulizar acenots
#include <stdlib.h>//limpar tela 
	main()
	{//come�o
		printf("\n\tEste programa informa sobre a temperatura");
		getchar();
		char continuar='s';//caracteres
		int temperatura;
		while(continuar=='s'||continuar== 'S')//== enquanto //nao colocar ;
		{
			system("cls");
			setlocale(LC_ALL,"Portuguese");
			printf("\n\tEntre com a temperatura: ");
			scanf("%d", &temperatura);//colocar a temperatura //%d significa um numero inteiro
			if(temperatura >=24&&temperatura<=26)//if = se
			{
				printf("\n\tTemperatua agradavel!!");
			}
			else // se ela nao for
			{
				if(temperatura>26)
				{
					printf("\n\tQuente pra krl!");
				}
			else
			{
				printf("\n\tCalma frozen");
			}
				
			}
			
			printf("\n\n\tDeseja continuar? Sim(s) N�o(n)");
			scanf("%s",&continuar);//atribuir um valor 
		}
	}//fim main
	
	

