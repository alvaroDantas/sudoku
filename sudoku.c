#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include "funcoes.h"

void recebeDados(int linha, int coluna, int numero,int sudokuMatriz[9][9],int sudokuResposta[N][N],int *qtd,int *life);
void dica(int linha, int coluna, int numero ,int sudokuMatriz[N][N],int sudokuResposta[N][N],int *qtd,int *life);


#define N 9
//FUNCAO QUE IRÁ CHAMAR AS FUNÇÕES DE VERIFICAÇÕES DE FORMA ORDENADA
void game(int linha, int coluna, int numero,int sudokuMatriz[N][N])
{
	printf("\n");
	if (verificaCoordenada(linha-1, coluna-1))//1
	{
	   printf("A coordenada eh Valida\n");
	   if (validaNumero(numero))//2
	   {
	   	  system("color a");	
		  printf("O numero eh valido\n");
		  if (checarZero(linha-1, coluna-1,sudokuMatriz))//3
		  {
		  	  system("color a");	
			  printf("Posicao eh vazia\n");
			  //CHEGOU AQUI, SERA ENVIADO LIN, COL, NUM E MATRIZ PARA A FUNCAO tentaPreencher
			  if (tentaPreencher(linha-1, coluna-1, numero,sudokuMatriz))//4
			  {

			  	  system("color a"); 	
				  printf("Quadrante beleza\n");
				  sudokuMatriz[linha-1][coluna-1]=numero;
				  system("color a");
				  printf("Numero sera preenchido\n");
				  
				  
			   }   
			   else//4
			   {
			   	   system("color c");
				   printf("Porem nao foi possivel, ja existe um %d na linha ou na coluna ou no mesmo quadrante\n",numero);
			   }
		   }	
		   else//3
		   {
		   	   system("color c");	
			   printf("Posicao ja esta ocupada\n");
		   }
		}   
		else//2
		{
			system("color c");
			printf("Numero invalido\n");
		}	
	}
	else//1
	{
		system("color c");
		printf("Coordenada invalida\n");
		
	}
	system("pause>>null");
	printSudoku(sudokuMatriz);
	system("cls");
	system("color f");
	
	
			  
}

//SE A SOMA DE TODOS OS ELEMENTOS FOR IGUAL A 405 O JOGO É ENCERRADO
void fimJogo(int sudokuMatriz[N][N],int *soma){
	int i,j;
	*soma=0;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			*soma+=sudokuMatriz[i][j];
		}
	}
}

void escolheNivel(int a,int sudokuMatriz[N][N]){
    int i, j;
    int sudokuMatrizAux[N][N];
    srand((unsigned)time(NULL));
    //MATRIZ AUXILIAR QUE IRÁ RECEBER UM VALOR DE ACORDO COM O NIVEL ESCOLHIDO NA MAIN
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            sudokuMatrizAux[i][j]=rand()%a;
            
        }
    }
    //FACIL
    if(a==3){
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                if(sudokuMatrizAux[i][j]==1 || sudokuMatrizAux[i][j]==2){
                    sudokuMatriz[i][j]=0;
                }
            }
        }
    }
    //MEDIO
    if(a==4){
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                if(sudokuMatrizAux[i][j]==1 || sudokuMatrizAux[i][j]==2 || sudokuMatrizAux[i][j]==3){
                    sudokuMatriz[i][j]=0;
                }
            }
        }
    }
    //DIFICIL
    if(a==5){
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                if(sudokuMatrizAux[i][j]==1 || sudokuMatrizAux[i][j]==2 || sudokuMatrizAux[i][j]==3 || sudokuMatrizAux[i][j]==4){
                    sudokuMatriz[i][j]=0;
                }
            }
        }
    }

    

}
	
	



int main() {
	int numM=0;//sortear entre as 3 matrizes possiveis guardada na funcao bancoMatriz
	int qtd=0,life=3;//variaveis para controlar as 3 chances possiveis do user
	system("color f");//trocar a cor do funco no wind
	int i,j,escolheLin_Col;//escolheLin_col serve para escolher entre as funcoes que serão chamadas, permutaColunas ou permutaLinhas
	int a,soma=0;//SOMA PARA VERIFICAR O FIM DO JOGO :/
	int numero ,linha, coluna;//variaves para serem usadas na funcao recebe dados, dica e game
	int control,subControleLinhas,subControleColunas;//variaves que irão que receber valores aleatorios, para chamar funcoes que irao embaralhar a matriz
	int sudokuResposta[N][N]={0};//matriz que guarda a resposta para usar na função dica
	int sudokuMatriz[N][N]={0};//matriz main
	srand(time(NULL));
	numM=rand()%3;//0,1 e 2
	//escolhendo um matriz
	bancoMatrizes(sudokuMatriz,numM);//escolha da matriz para o jogo	
							
	control=rand()%2;//RESTOS POSSIVEIS DE 2(0,1)
	subControleLinhas=rand()%3;//RESTOS POSSIVEIS DE 3(0,1,2)
	subControleColunas=rand()%3;//0,1 e 2
	escolheLin_Col=rand()%2;//0 e 1
	//embaralhando a matriz automaticamente
	switch(control){
		case 0:
			switch(subControleLinhas){
		
				case 0:
					trocaLinhasUni(rand()%3,rand()%3,sudokuMatriz);//trocando duas linhas entre as linhas 1 e 3	
				break;
				case 1:
					trocaLinhasUni((rand()%3)+3,(rand()%3)+3,sudokuMatriz);//trocando duas linhas entre as linhas 4 e 6
				break;
				case 2 :
					trocaLinhasUni((rand()%3)+6,(rand()%3)+6,sudokuMatriz);//trocando duas linhas entre as linhas 7 e 9
				break;
			}
		break;
		case 1:
			switch(subControleColunas){
				case 0:
					trocaColunasUni(rand()%3,rand()%3,sudokuMatriz);//trocando duas colunas entre as linhas 1 e 3	
				break;
				case 1:
					trocaColunasUni((rand()%3)+3,(rand()%3)+3,sudokuMatriz);//trocando duas colunas entre as linhas 4 e 6
				break;
				case 2 :
					trocaColunasUni((rand()%3)+6,(rand()%3)+6,sudokuMatriz);//trocando duas coluas entre as linhas 7 e 9
				break;	
			}
		break;			

		
	}
	transporMatriz(sudokuMatriz);//TRANSPOSIÇÃO
	substitui((rand()%9)+1,(rand()%9)+1,sudokuMatriz);//trocar 2 valores aleatorios dentro da matriz
	
	if(escolheLin_Col)
		permutaLinhas(sudokuMatriz);
	else
		permutaColunas(sudokuMatriz);
	
	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			sudokuResposta[i][j]=sudokuMatriz[i][j];
		}
	}
	
	system("cls");
	menu();//menu que roda em um laço enquanto a tecla digitada for ESC ou o user escoher uma opcao valida
	
	
	//ESCOLHA DO NIVEL
	printf("\nEscolha um nivel para jogar\n");
	printf("\n1 - FACIL\n2 - MEDIO\n3 - DIFICIL\n\n>> ");
	scanf("%d",&a);
	//fflush(stdin);
	escolheNivel(a+2,sudokuMatriz);//FUNCAO PARA EMBARALHAR A MATRIZ DE FORMA RANDOMICA
	
	system("cls");
	
	int sair=1;//variavel para controlar o while
	while(soma!=405){
		fimJogo(sudokuMatriz,&soma);	
	 	if(soma!=405){

	 		printf("\nAqui ");
	 		system("pause>>null");	
			recebeDados(linha,coluna,numero,sudokuMatriz,sudokuResposta,&qtd,&life);//função para receber as coordenadas(linha e coluna) e o numero(1a9).
		}
		else{
			sair=0;
			printf("\nParabens, voce concluiu o jogo :D\n");
			return 0;
		}
		
	 }

	 return 0;
		
}

//FUNCAO PARA RECEBER LIN, COL E NUM, LOGO CHAMAR A FUNCAO GAME
void recebeDados(int linha, int coluna, int numero,int sudokuMatriz[9][9],int sudokuResposta[N][N],int *qtd,int *life)
{
   int opc,linDica,colDica;
   //DESENHO DA MATRIZ
   printSudoku(sudokuMatriz); 
   
   printf("\n\n\n");
   printf("\nLinha: ");
   scanf("%d", &linha);
 
   printf("\nColuna: ");
   scanf("%d", &coluna);
   
   printf("\nNumero: ");
   scanf("%d", &numero);

   game(linha,coluna,numero,sudokuMatriz);

   printf("\n WHILE - QTD : %d Life : %d",*qtd,*life);
	while(*qtd<3){
		printf("\nQuer uma dica?Voce tem  : %d - (1-SIM 2-NAO)\n\n>> ",*life);
   		scanf("%d",&opc);
   		fflush(stdin);
   		system("cls");
   		if(opc==1){
			(*qtd)++;
			(*life)--;
			printSudoku(sudokuMatriz);
			printf("\n\n\n");
			printf("\nLinha da Dica : ");
			scanf("%d",&linDica);
			printf("\nColuna da Dica : ");
			scanf("%d",&colDica);	
			dica(linDica,colDica,numero,sudokuMatriz,sudokuResposta,qtd,life);
			
		}
		if(opc==2){
			printf("\n ELSE IF - QTD : %d Life : %d",*qtd,*life);
			break;
		}
		
		
		
	}	
   
}

void dica(int linha, int coluna, int numero ,int sudokuMatriz[N][N],int sudokuResposta[N][N],int *qtd,int *life){
	int i,j,aux=0;
	if (verificaCoordenada(linha-1, coluna-1))//1
	{
	   system("color a");	
	   printf("\nA coordenada eh Valida\n");
	   if (checarZero(linha-1, coluna-1,sudokuMatriz))//3
	   {
		  	  system("color a");	
			  printf("Posicao eh vazia\n");
			  aux=sudokuResposta[linha-1][coluna-1];
			  for(i=0;i<N;i++){
			  	for(j=0;j<N;j++){
			  		if(sudokuResposta[i][j]==aux)
			  			sudokuMatriz[i][j]=aux;
				  	}
			  }
			  printf("\nDica sera preenchida com o numero %d",aux);
			  system("pause>>null");
			  system("cls");
			  system("color f");
			  //(*qtd)--;
			  //(*life)++;
			  recebeDados(linha,coluna,numero,sudokuMatriz,sudokuResposta,qtd,life);
		}	
		else//3
		{
		  system("color c");	
		  printf("Posicao ja esta ocupada\n");
		}
		  	
	}
	else//1
	{
		system("color c");
		printf("Coordenada invalida\n");
		
	}
	
	(*qtd)--;
	(*life)++;
	printf("\nDICA - QTD : %d    LIfe : %d",*qtd,*life);
	system("pause>>null");

	system("cls");
	system("color f");
	recebeDados(linha,coluna,numero,sudokuMatriz,sudokuResposta,qtd,life);
}
