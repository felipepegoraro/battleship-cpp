#include "./utils.h"
#include "./game.h"
#include <iostream>

using namespace std;

#define PLAYING 1
#define STOPPED 0
#define UPPER   9
#define NMAX    5

static void testaInput(int);
static void posicionaBarcos(char[LIN][COL]);
static void testaPontos(char, int*, int*);

void jogo(void)
{
	int linJ, colJ, score=0, nTry=NMAX, status = PLAYING;
	char letter;
	char tab[LIN][COL], mask[LIN][COL];

	iniciaTabuleiro(tab, 'A'), iniciaTabuleiro(mask, '*');
	posicionaBarcos(tab);

	while (status == PLAYING){
		clear();

		display(mask, score, nTry);
		display(tab, 0, 0); // gabarito...

		cout << " > linha...: ", cin >> letter;
		linJ = toupper(int(letter)) - 65;
		testaInput(linJ);

		cout << " > coluna..: ", cin >> colJ;
		testaInput(colJ);

		// revela
		mask[linJ][colJ] = tab[linJ][colJ];
		testaPontos(mask[linJ][colJ], &score, &nTry);


		char rpl;
		if (score >= 10)
		{
			cout << "\n\n\t    VOCÊ VENCEU !" << endl;
			cin.ignore();
			cout << " digite qualquer tecla para sair... ", cin.get(rpl);
			menuInicial();
		}

		if (nTry == 4)
		{
			cout << "\n\n\t    VOCÊ PERDEU !" << endl;
			cin.ignore();
			cout << " digite qualquer tecla para sair... ", cin.get(rpl);
			status = STOPPED;
			menuInicial();
		}
	}
}

void testaInput(int n)
{
	if (n < 0 || n > COL){
		cout << "\n invalido..." << endl;
		exit(EXIT_FAILURE);
	}
}

static void posicionaBarcos(char tab[LIN][COL])
{
	int linBarco, colBarco, qndPos = 0;

	while (qndPos < COL){
		linBarco = (rand() % UPPER) + 1;
		colBarco = (rand() % UPPER) + 1;

		if (tab[linBarco][colBarco] == 'A'){
			tab[linBarco][colBarco] = 'B';
			qndPos++;
		}
	}
}

static void testaPontos(char upChar, int *score, int *nTry)
{
	switch(upChar){
		case 'B':
			(*score) += 10;
			break;
		default:
			(*nTry)--;
	}
}
