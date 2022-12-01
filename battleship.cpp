#include <iostream>
#include <string>
#include <time.h>
#include "./src/utils.h"

using namespace std;

void menuInicial();
void jogo();

int main(void)
{
	menuInicial();
	return(EXIT_SUCCESS);
}

void menuInicial(){
	int opc = 0; //opcao escolhida
	
	while (opc < 1 || opc > 3){
		clear();
		cout << "\t Batalha Naval!" << endl;

		cout << "\n 1. jogar" << endl;
		cout << " 2. sobre" << endl;
		cout << " 3.  sair" << endl;
		cout << "\n escolha: " << endl;

		cin >> opc;

		switch(opc){
			case 1: cout << "jogar\n"; break;
			case 2: cout << "sobre\n"; break;
			case 3: 
				cout << " saindo...\n";
				exit(EXIT_SUCCESS);
		}
	}
}

void jogo()
{
	// tabuleiro 10 por 10
	char tab[10][10];
}
