#include <stdio.h>//Fun��es de entrada e saida 
#include <locale.h>// Ulizar acenots
#include <stdlib.h>//limpar tela 
#include <conio.h>//Para utilizar o getch

#define max 3//Define o maximo para 1 
	main()
	{//come�o
		
		char continuar; 
		int v[4];//vetor
		char n[]="Aziz";
		
		v[0]=2;
		v[1]=8;
		v[2]=10;
		v[3]=20;
		continuar = 's';
		setlocale(LC_ALL,"portuguese");
		printf("\n\n\t\tEste programa faz");
		getch();
		while(continuar=='s'|| continuar=='s')
		{
			system("cls");
			for(int i=0;i<=max;i=i+1)//contagem de numeros inteiros
			{
				printf("\n\tO valor do vetor[%d]=%c",i,n[i]);
				printf("\n\tO valor do vetor[%d]=%d",i,v[i]);
			}
			{/*
				printf("\n\tContador i--> %d",i);
				for(int j=0;j<=max;j=j+1)
				{
					printf("\n\t\tContador j--> %d",j);
					for(int k=0;k<=max;k=k+1)
					{
						printf("\n\t\t\tContador k--> %d",k);
					}
				}*/
			}
			printf("\n\n\tDeseja continuar? s(sim) n(nao):");
			scanf("%s",&continuar);
		}
	}//fim main
	
	

