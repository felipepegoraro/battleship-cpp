#include "./utils.h"
#include <iostream>
#include <ctype.h>

using namespace std;

void clear(void)
{
	int res;
	if ((res = system(clean)) < 0){
		perror("system");
		exit(EXIT_FAILURE);
	}
}

void iniciaTabuleiro(char tab[LIN][COL], unsigned char code)
{
	int lin, col;
	for (lin=0; lin<10; lin++){
		for (col=0; col<10; col++){
			tab[lin][col] = code;
		}
	}
}

void display(char tab[LIN][COL], int score, int nTry)
{
	int i, j;

	cout << "\n\t    Batalha Naval!\n" << endl;
	printf("\tscore[%d]\t", score);
	cout << "chances[" << nTry << "]\n" << endl;

	for (i=0; i<LIN; i++){
		printf("\t%c | ", (char)(i+65) );
		for (j=0; j<COL; j++)
			cout << " " << tab[i][j];
		cout << "\n";
	}

	cout << "\t    ";
	for (i=0; i<COL; i++)
		cout << " -";

	cout << "\n\t    ";
	for (i=0; i<COL; i++)
		cout << " " << i;

	cout << "\n";
}

int menuInicial(void){
	int opc = 0; //opcao escolhida
	
	clear();

	cout << "\n 1. jogar" << endl;
	cout << " 2. sobre" << endl;
	cout << " 3.  sair" << endl;

	cout << "\n escolha: ", cin >> opc;

	return opc;
}
