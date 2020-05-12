#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
#define N 9

void gotoxy(int x, int y){
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}

void desenhoquadrante(){
    int x, y;
    char lin_d=205;//═

    /*________________LINHAS QUADRANTES________________*/
    {//PRIMEIRA LINHA
    gotoxy(1,1);
    printf("%c", lin_d-4);//╔
    for(x=2, y=1; x<13; x++){
        gotoxy(x,y);
        printf("%c", lin_d);//═
    }
    gotoxy(13,1);
    printf("%c", lin_d-2);//╦
    for(x=14, y=1; x<25; x++){
        gotoxy(x,y);
        printf("%c", lin_d);//═
    }
    gotoxy(25,1);
    printf("%c", lin_d-2);//╦
    for(x=26, y=1; x<37; x++){
        gotoxy(x,y);
        printf("%c", lin_d);//═
    }
    gotoxy(37,1);
    printf("%c", lin_d-18);//╗
    }
    {//SEGUNDA LINHA
    gotoxy(1,7);
    printf("%c", lin_d-1);//╠
    for(x=2, y=7; x<13; x++){
        gotoxy(x,y);
        printf("%c", lin_d);//═
    }
    gotoxy(13,7);
    printf("%c", lin_d+1);//╬
    for(x=14, y=7; x<25; x++){
        gotoxy(x,y);
        printf("%c", lin_d);//═
    }
    gotoxy(25,7);
    printf("%c", lin_d+1);//╬
    for(x=26, y=7; x<37; x++){
        gotoxy(x,y);
        printf("%c", lin_d);//═
    }
    gotoxy(37,7);
    printf("%c", lin_d-20);//╣
    }
    {//TERCEIRA LINHA
    gotoxy(1,13);
    printf("%c", lin_d-1);//╠
    for(x=2, y=13; x<13; x++){
        gotoxy(x,y);
        printf("%c", lin_d);//═
    }
    gotoxy(13,13);
    printf("%c", lin_d+1);//╬
    for(x=14, y=13; x<25; x++){
        gotoxy(x,y);
        printf("%c", lin_d);//═
    }
    gotoxy(25,13);
    printf("%c", lin_d+1);//╬
    for(x=26, y=13; x<37; x++){
        gotoxy(x,y);
        printf("%c", lin_d);//═
    }
    gotoxy(37,13);
    printf("%c", lin_d-20);//╣
    }
    {//QUARTA LINHA
    gotoxy(1,19);
    printf("%c", lin_d-5);//╚
    for(x=2, y=19; x<13; x++){
        gotoxy(x,y);
        printf("%c", lin_d);//═
    }
    gotoxy(13,19);
    printf("%c", lin_d-3);//╩
    for(x=14, y=19; x<25; x++){
        gotoxy(x,y);
        printf("%c", lin_d);//═
    }
    gotoxy(25,19);
    printf("%c", lin_d-3);//╩
    for(x=26, y=19; x<37; x++){
        gotoxy(x,y);
        printf("%c", lin_d);//═
    }
    gotoxy(37,19);
    printf("%c", lin_d-17);//╝
    }

    /*________________COLUNAS QUADRANTES________________*/
    {//PRIMEIRA COLUNA
    for(y=2, x=1; y<7; y++){
        gotoxy(x,y);
        printf("%c", lin_d-19);//║
    }
    for(y=8, x=1; y<13; y++){
        gotoxy(x,y);
        printf("%c", lin_d-19);//║
    }
    for(y=14, x=1; y<19; y++){
        gotoxy(x,y);
        printf("%c", lin_d-19);//║
    }
    }
    {//SEGUNDA COLUNA
    for(y=2, x=13; y<7; y++){
        gotoxy(x,y);
        printf("%c", lin_d-19);//║
    }
    for(y=8, x=13; y<13; y++){
        gotoxy(x,y);
        printf("%c", lin_d-19);//║
    }
    for(y=14, x=13; y<19; y++){
        gotoxy(x,y);
        printf("%c", lin_d-19);//║
    }
    }
    {//TERCEIRA COLUNA
    for(y=2, x=25; y<7; y++){
        gotoxy(x,y);
        printf("%c", lin_d-19);//║
    }
    for(y=8, x=25; y<13; y++){
        gotoxy(x,y);
        printf("%c", lin_d-19);//║
    }
    for(y=14, x=25; y<19; y++){
        gotoxy(x,y);
        printf("%c", lin_d-19);//║
    }
    }
    {//QUARTA COLUNA
    for(y=2, x=37; y<7; y++){
        gotoxy(x,y);
        printf("%c", lin_d-19);//║
    }
    for(y=8, x=37; y<13; y++){
        gotoxy(x,y);
        printf("%c", lin_d-19);//║
    }
    for(y=14, x=37; y<19; y++){
        gotoxy(x,y);
        printf("%c", lin_d-19);//║
    }
    }
}

void unitario(){
    int x, y, c, l;
    char lin_s=196;//─

    /*________________QUADRANTE 1________________*/
    {//LINHA 1
    for(x=2, y=3; x<5; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(5,3);
    printf("%c", lin_s+1);//┼
    for(x=6, y=3; x<9; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(9,3);
    printf("%c", lin_s+1);
    for(x=10, y=3; x<13; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    }
    {//LINHA 2
    for(x=2, y=5; x<5; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(5,5);
    printf("%c", lin_s+1);//┼
    for(x=6, y=5; x<9; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(9,5);
    printf("%c", lin_s+1);//┼
    for(x=10, y=5; x<13; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    }
    {//COLUNA 1
    gotoxy(5,2);
    printf("%c", lin_s-17);//│
    gotoxy(5,4);
    printf("%c", lin_s-17);
    gotoxy(5,6);
    printf("%c", lin_s-17);
    }
    {//COLUNA 2
    gotoxy(9,2);
    printf("%c", lin_s-17);//│
    gotoxy(9,4);
    printf("%c", lin_s-17);
    gotoxy(9,6);
    printf("%c", lin_s-17);
    }

    /*________________QUADRANTE 2________________*/
    {//LINHA 1
    for(x=14, y=3; x<17; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(17,3);
    printf("%c", lin_s+1);//┼
    for(x=18, y=3; x<21; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(21,3);
    printf("%c", lin_s+1);
    for(x=22, y=3; x<25; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    }
    {//LINHA 2
    for(x=14, y=5; x<17; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(17,5);
    printf("%c", lin_s+1);//┼
    for(x=18, y=5; x<21; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(21,5);
    printf("%c", lin_s+1);//┼
    for(x=22, y=5; x<25; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    }
    {//COLUNA 1
    gotoxy(17,2);
    printf("%c", lin_s-17);//│
    gotoxy(17,4);
    printf("%c", lin_s-17);
    gotoxy(17,6);
    printf("%c", lin_s-17);
    }
    {//COLUNA 2
    gotoxy(21,2);
    printf("%c", lin_s-17);//│
    gotoxy(21,4);
    printf("%c", lin_s-17);
    gotoxy(21,6);
    printf("%c", lin_s-17);
    }

    /*________________QUADRANTE 3________________*/
    {//LINHA 1
    for(x=26, y=3; x<29; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(29,3);
    printf("%c", lin_s+1);//┼
    for(x=30, y=3; x<33; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(33,3);
    printf("%c", lin_s+1);//┼
    for(x=34, y=3; x<37; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    }
    {//LINHA 2
    for(x=26, y=5; x<29; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(29,5);
    printf("%c", lin_s+1);//┼
    for(x=30, y=5; x<33; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(33,5);
    printf("%c", lin_s+1);//┼
    for(x=34, y=5; x<37; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    }
    {//COLUNA 1
    gotoxy(29,2);
    printf("%c", lin_s-17);//│
    gotoxy(29,4);
    printf("%c", lin_s-17);
    gotoxy(29,6);
    printf("%c", lin_s-17);
    }
    {//COLUNA 2
    gotoxy(33,2);
    printf("%c", lin_s-17);//│
    gotoxy(33,4);
    printf("%c", lin_s-17);
    gotoxy(33,6);
    printf("%c", lin_s-17);
    }

    /*________________QUADRANTE 4________________*/
    {//LINHA 1
    for(x=2, y=9; x<5; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(5,9);
    printf("%c", lin_s+1);//┼
    for(x=6, y=9; x<9; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(9,9);
    printf("%c", lin_s+1);
    for(x=10, y=9; x<13; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    }
    {//LINHA 2
    for(x=2, y=11; x<5; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(5,11);
    printf("%c", lin_s+1);//┼
    for(x=6, y=11; x<9; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(9,11);
    printf("%c", lin_s+1);
    for(x=10, y=11; x<13; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    }
    {//COLUNA 1
    gotoxy(5,8);
    printf("%c", lin_s-17);//│
    gotoxy(5,10);
    printf("%c", lin_s-17);
    gotoxy(5,12);
    printf("%c", lin_s-17);
    }
    {//COLUNA 2
    gotoxy(9,8);
    printf("%c", lin_s-17);//│
    gotoxy(9,10);
    printf("%c", lin_s-17);
    gotoxy(9,12);
    printf("%c", lin_s-17);
    }

    /*________________QUADRANTE 5________________*/
    {//LINHA 1
    for(x=14, y=9; x<17; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(17,9);
    printf("%c", lin_s+1);//┼
    for(x=18, y=9; x<21; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(21,9);
    printf("%c", lin_s+1);
    for(x=22, y=9; x<25; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    }
    {//LINHA 2
    for(x=14, y=11; x<17; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(17,11);
    printf("%c", lin_s+1);//┼
    for(x=18, y=11; x<21; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(21,11);
    printf("%c", lin_s+1);//┼
    for(x=22, y=11; x<25; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    }
    {//COLUNA 1
    gotoxy(17,8);
    printf("%c", lin_s-17);//│
    gotoxy(17,10);
    printf("%c", lin_s-17);
    gotoxy(17,12);
    printf("%c", lin_s-17);
    }
    {//COLUNA 2
    gotoxy(21,8);
    printf("%c", lin_s-17);//│
    gotoxy(21,10);
    printf("%c", lin_s-17);
    gotoxy(21,12);
    printf("%c", lin_s-17);
    }

    /*________________QUADRANTE 6________________*/
    {//LINHA 1
    for(x=26, y=9; x<29; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(29,9);
    printf("%c", lin_s+1);//┼
    for(x=30, y=9; x<33; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(33,9);
    printf("%c", lin_s+1);//┼
    for(x=34, y=9; x<37; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    }
    {//LINHA 2
    for(x=26, y=11; x<29; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(29,11);
    printf("%c", lin_s+1);//┼
    for(x=30, y=11; x<33; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(33,11);
    printf("%c", lin_s+1);//┼
    for(x=34, y=11; x<37; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    }
    {//COLUNA 1
    gotoxy(29,8);
    printf("%c", lin_s-17);//│
    gotoxy(29,10);
    printf("%c", lin_s-17);
    gotoxy(29,12);
    printf("%c", lin_s-17);
    }
    {//COLUNA 2
    gotoxy(33,8);
    printf("%c", lin_s-17);//│
    gotoxy(33,10);
    printf("%c", lin_s-17);
    gotoxy(33,12);
    printf("%c", lin_s-17);
    }


    /*________________QUADRANTE 7________________*/
    {//LINHA 1
    for(x=2, y=15; x<5; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(5,15);
    printf("%c", lin_s+1);//┼
    for(x=6, y=15; x<9; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(9,15);
    printf("%c", lin_s+1);
    for(x=10, y=15; x<13; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    }
    {//LINHA 2
    for(x=2, y=17; x<5; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(5,17);
    printf("%c", lin_s+1);//┼
    for(x=6, y=17; x<9; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(9,17);
    printf("%c", lin_s+1);
    for(x=10, y=17; x<13; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    }
    {//COLUNA 1
    gotoxy(5,14);
    printf("%c", lin_s-17);//│
    gotoxy(5,16);
    printf("%c", lin_s-17);
    gotoxy(5,18);
    printf("%c", lin_s-17);
    }
    {//COLUNA 2
    gotoxy(9,14);
    printf("%c", lin_s-17);//│
    gotoxy(9,16);
    printf("%c", lin_s-17);
    gotoxy(9,18);
    printf("%c", lin_s-17);
    }

    /*________________QUADRANTE 8________________*/
    {//LINHA 1
    for(x=14, y=15; x<17; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(17,15);
    printf("%c", lin_s+1);//┼
    for(x=18, y=15; x<21; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(21,15);
    printf("%c", lin_s+1);
    for(x=22, y=15; x<25; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    }
    {//LINHA 2
    for(x=14, y=17; x<17; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(17,17);
    printf("%c", lin_s+1);//┼
    for(x=18, y=17; x<21; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(21,17);
    printf("%c", lin_s+1);//┼
    for(x=22, y=17; x<25; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    }
    {//COLUNA 1
    gotoxy(17,14);
    printf("%c", lin_s-17);//│
    gotoxy(17,16);
    printf("%c", lin_s-17);
    gotoxy(17,18);
    printf("%c", lin_s-17);
    }
    {//COLUNA 2
    gotoxy(21,14);
    printf("%c", lin_s-17);//│
    gotoxy(21,16);
    printf("%c", lin_s-17);
    gotoxy(21,18);
    printf("%c", lin_s-17);
    }

    /*________________QUADRANTE 9________________*/
    {//LINHA 1
    for(x=26, y=15; x<29; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(29,15);
    printf("%c", lin_s+1);//┼
    for(x=30, y=15; x<33; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(33,15);
    printf("%c", lin_s+1);//┼
    for(x=34, y=15; x<37; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    }
    {//LINHA 2
    for(x=26, y=17; x<29; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(29,17);
    printf("%c", lin_s+1);//┼
    for(x=30, y=17; x<33; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    gotoxy(33,17);
    printf("%c", lin_s+1);//┼
    for(x=34, y=17; x<37; x++){
        gotoxy(x,y);
        printf("%c", lin_s);//─
    }
    }
    {//COLUNA 1
    gotoxy(29,14);
    printf("%c", lin_s-17);//│
    gotoxy(29,16);
    printf("%c", lin_s-17);
    gotoxy(29,18);
    printf("%c", lin_s-17);
    }
    {//COLUNA 2
    gotoxy(33,14);
    printf("%c", lin_s-17);//│
    gotoxy(33,16);
    printf("%c", lin_s-17);
    gotoxy(33,18);
    printf("%c", lin_s-17);
    }

}

void printSudoku(int sudokuMatriz[9][9]) {
    int i,j;
    i=j=0;
	gotoxy(1,2);
	for(i=0;i<=8;i++){
		for(j=0;j<=8;j++){
            if(sudokuMatriz[i][j]==0)
                printf("    ");
            else
                printf("  %d ",sudokuMatriz[i][j]);
		}
		printf("\n\n");
	}
	desenhoquadrante();
	unitario();
}

int checarZero(int linha, int coluna,int sudokuMatriz[9][9]) {
	 if (sudokuMatriz[linha][coluna]==0)
		 return 1;
	 else
		 return 0;	
}

int tentaPreencher(int linha, int coluna, int numero, int sudokuMatriz[9][9]) {
  int col,lin;
  for (lin = 0; lin < N; lin++)//verificar a coluna j
	if (sudokuMatriz[lin][coluna] == numero)
	  return 0;
  for (col = 0; col < N; col++)//verificar a linha i
	if (sudokuMatriz[linha][col] == numero)
	  return 0;
   //verificar o quadrante comencando de i - (i%3) até (i-(i%3))+3
   for (lin = linha - linha % 3; lin < linha - linha % 3 +3; lin++)
	for (col = coluna - coluna % 3; col < coluna - coluna % 3 + 3; col++)
	  if (sudokuMatriz[lin][col] == numero)
	return 0;
  
  return 1;
}

int verificaCoordenada(int linha, int coluna) 
{
  if(linha>=0 && linha <9 && coluna>=0 && coluna <9)
	  return 1;
   else
	  return 0;
}

int validaNumero(int numero)
{
  if(numero>0 && numero <=9)
	 return 1;
   else
	  return 0;

}

void apresentacao(){
	system("cls");
	printf("Sudoku - IFSP\n");
	printf("O game consiste em preencher o tabuleiro (9x9), \napenas nos campos vazios utilizando numeros de 1 a 9,\n");
	printf("de forma que os numeros nao repitam em suas respectivas linhas, \ncolunas e quadrantes(3x3).");
	printf("\n Bom game !\n");
	system("pause");
	system("cls");

}
void permutaLinhas(int sudokuMatriz[N][N])
{
    int i, j, aux;
    
    for(i = 0; i < 4; i++) {//até a metade da matriz, apenas o meio irá manter
        for(j = 0; j < N; j++)  {
            aux = sudokuMatriz[i][j];
            
            sudokuMatriz[i][j] = sudokuMatriz[8 - i][j];
            sudokuMatriz[8 - i][j] = aux;
        }
    }
}
void permutaColunas(int sudokuMatriz[N][N])
{
    int i, j, aux;
    
    for(i = 0; i < N; i++) {//até a metade da matriz, apenas o meio irá manter
        for(j = 0; j < 4; j++)  {
            aux = sudokuMatriz[i][j];
            
            sudokuMatriz[i][j] = sudokuMatriz[8 - i][j];
            sudokuMatriz[8 - i][j] = aux;
        }
    }
}


//inverte dois valores aleatorios, por toda a matriz
void substitui(int a, int b,int sudokuMatriz[N][N])
{
    int i, j;
    for(i = 0; i < N; i++)  {
        for(j = 0; j < N; j++)  {
            if(sudokuMatriz[i][j] == a)
            sudokuMatriz[i][j] = b;
            
            else if(sudokuMatriz[i][j] == b)
            sudokuMatriz[i][j] =a;
        }
    }
}
//troca valores de duas lihnas , em um intervalo de 3 linhas no máx
void trocaLinhasUni(int lin1, int lin2,int sudokuMatriz[N][N])
{
    int j, auxL;

    for(j = 0; j < N; j++) {
        auxL = sudokuMatriz[lin1][j];
        
        sudokuMatriz[lin1][j] = sudokuMatriz[lin2][j];
        sudokuMatriz[lin2][j] = auxL;
    }
}
//troca valores de duas colunas, entre 3 colunas , ENTRE AS 3 COLUNAS DE 3
void trocaColunasUni(int col1, int col2,int sudokuMatriz[N][N])
{
    int i, auxC;    
    
    for(i = 0; i < N; i++) {
        auxC = sudokuMatriz[i][col1];
        
        sudokuMatriz[i][col1] = sudokuMatriz[i][col2];
        sudokuMatriz[i][col2] = auxC;
    }
}
//TROCA DE TODAS AS LINHAS POR COLUNAS
void transporMatriz(int sudokuMatriz[N][N])
{
    int i, j;
    int sudokuMatrizAux[N][N];
    
    for(i = 0; i < N; i++)  {
        for(j = 0; j < N; j++)  {
            sudokuMatrizAux[i][j] = sudokuMatriz[i][j];         
        }
    }
    
    for(i = 0; i < N; i++)  {
        for(j = 0; j < N; j++) {
            sudokuMatriz[i][j] = sudokuMatrizAux[j][i];
        }
    }
    
}
void bancoMatrizes(int sudokuMatriz[N][N],int numM){

    int i,j;

    int sudokuMatriz1[N][N] = { 
                            {8, 3, 5, 4, 1, 6, 9, 2, 7 },
                            {2, 9, 6, 8, 5, 7, 4, 3, 1 },
                            {4, 1, 7, 2, 9, 3, 6, 5, 8 },
                            {5, 6, 9, 1, 3, 4, 7, 8, 2 },
                            {1, 2, 3, 6, 7, 8, 5, 4, 9 },
                            {7, 4, 8, 5, 2, 9, 1, 6, 3 },
                            {6, 5, 2, 7, 8, 1, 3, 9, 4 },
                            {9, 8, 1, 3, 4, 5, 2, 7, 6 },
                            {3, 7, 4, 9, 6, 2, 8, 1, 5 } 
                            };

    
    int sudokuMatriz2[N][N] = { 
                            {5, 3, 4, 6, 7, 8, 9, 1, 2 },
                            {6, 7, 2, 1, 9, 5, 3, 4, 8 },
                            {1, 9, 8, 3, 4, 2, 5, 6, 7 },
                            {8, 5, 9, 7, 6, 1, 4, 2, 3 },
                            {4, 2, 6, 8, 5, 3, 7, 9, 1 },
                            {7, 1, 3, 9, 2, 4, 8, 5, 6 },
                            {9, 6, 1, 5, 3, 7, 2, 8, 4 },
                            {2, 8, 7, 4, 1, 9, 6, 3, 5 },
                            {3, 4, 5, 2, 8, 6, 1, 7, 9 } 
                            };

    int sudokuMatriz3[N][N] = { 
                            {3, 5, 4, 6, 8, 9, 1, 7, 2 },
                            {1, 2, 7, 3, 5, 4, 9, 6, 8 },
                            {9, 6, 8, 2, 7, 1, 5, 4, 3 },
                            {5, 1, 9, 4, 6, 8, 2, 3, 7 },
                            {8, 7, 2, 9, 3, 5, 6, 1, 4 },
                            {4, 3, 6, 1, 2, 7, 8, 5, 9 },
                            {2, 8, 5, 7, 4, 6, 3, 9, 1 },
                            {7, 9, 3, 5, 1, 2, 4, 8, 6 },
                            {6, 4, 1, 8, 9, 3, 7, 2, 5 } 
                            };

    if(numM==0){
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                sudokuMatriz[i][j]=sudokuMatriz1[i][j];
            }
        }
    }
    if(numM==1){
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                sudokuMatriz[i][j]=sudokuMatriz2[i][j];
            }
        }
    }
    if(numM==2){
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                sudokuMatriz[i][j]=sudokuMatriz1[i][j];
            }
        }
    }                                      

    
}

void opcaoTeclas(){
    char c = 128, o = 229, e = 144;

    gotoxy(2,3);
    printf("\t****SUDOKU****");
    gotoxy(2,6);
    printf("JOGAR");
    gotoxy(2,8);
    printf("COMO JOGAR");
    gotoxy(2,10);
    printf("CR%cDITOS", e);
    gotoxy(2,12);
    printf("SAIR");

}

void desenhoBordas(){
    char d = 205;//═
    int x, y;

    gotoxy(1,1);
    printf("%c", d-4);//╔
    for(x=2; x<30; x++){
        gotoxy(x,1);
        printf("%c", d);//═
    }
    gotoxy(30,1);
    printf("%c", d-18);//╗
    for(y=2; y<5; y++){
        gotoxy(1,y);
        printf("%c", d-19);//║
    }
    gotoxy(1,5);
    printf("%c", d-1);//╠
    gotoxy(1,6);
    printf("%c", d-19);//║
    gotoxy(1,7);
    printf("%c", d-1);//╠
    gotoxy(1,8);
    printf("%c", d-19);//║
    gotoxy(1,9);
    printf("%c", d-1);//╠
    gotoxy(1,10);
    printf("%c", d-19);//║
    gotoxy(1,11);
    printf("%c", d-1);//╠
    gotoxy(1,12);
    printf("%c", d-19);//║
    gotoxy(1,13);
    printf("%c", d-5);//╠

    for(x=2; x<30; x++){
            gotoxy(x,5);
            printf("%c", d);//═
            gotoxy(x,7);
            printf("%c", d);
            gotoxy(x,9);
            printf("%c", d);
            gotoxy(x,11);
            printf("%c", d);
            gotoxy(x,13);
            printf("%c", d);
    }
    for(y=2; y<5; y++){
        gotoxy(30,y);
        printf("%c", d-19);//║
    }
    gotoxy(30,5);
    printf("%c", d-20);//╣
    gotoxy(30,6);
    printf("%c", d-19);//║
    gotoxy(30,7);
    printf("%c", d-20);//╣
    gotoxy(30,8);
    printf("%c", d-19);//║
    gotoxy(30,9);
    printf("%c", d-20);//╣
    gotoxy(30,10);
    printf("%c", d-19);//║
    gotoxy(30,11);
    printf("%c", d-20);//╣
    gotoxy(30,12);
    printf("%c", d-19);//║
    gotoxy(30,13);
    printf("%c", d-17);//╝
}

void creditos(){

    char a = 182, a2 = 181, i = 214;

    printf("\t\t****IFSP C%cMPUS HORTOL%cNDIA****", a, a);
    printf("\n\t\t\t%cLVARO AUGUSTO\n\t\t\tJUAN BAILKE\n\t\t\tMAR%cLIA CALIARI", a2, i);

}

void comojogar(){
    printf("Você deve completar os espaços com números de 1 a 9 de forma que não se repita na linha, na coluna ou no quadrante.");
}

void setas(){

    int tecla = 0, y = 6;
    char s = 27;

    gotoxy(25,y);
    printf("%c", s);
    while((tecla = getch())!= 0x1b)
    {
        if(tecla == 72){
            if(y == 6)
                break;
            system("cls");
            desenhoBordas();
            opcaoTeclas();
            gotoxy(25,y = y-2);
            printf("%c", s);
        }
        if(tecla == 80){
            if(y == 12)
                break;
            system("cls");
            desenhoBordas();
            opcaoTeclas();
            gotoxy(25,y = y+2);
            printf("%c", s);
        }
        if(tecla == 13){
            if(y == 6){
                system("cls");
				printf("\nAqui jogar");
				break;
				
            }
            if(y == 8){
                system("cls");
                apresentacao();
            }
            if(y == 10){
                system("cls");
                creditos();
            }
            if(y == 12){
				system("cls");
                exit(0);
			}	
        }
    }
	system("cls");
	
}

void menu(){
    desenhoBordas();
    opcaoTeclas();
    setas();
}


