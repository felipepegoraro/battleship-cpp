#include "./utils.h"
#include <iostream>

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

void display(char tab[LIN][COL])
{
	int i, j;
	for (i=0; i<LIN; i++){
		for (j=0; j<COL; j++){
			cout << " " << tab[i][j];
		}
		cout << "\n";
	}
}

int menuInicial(void){
	int opc = 0; //opcao escolhida
	
	clear();
	cout << "\t Batalha Naval!" << endl;

	cout << "\n 1. jogar" << endl;
	cout << " 2. sobre" << endl;
	cout << " 3.  sair" << endl;

	cout << "\n escolha: ", cin >> opc;

	return opc;
}
