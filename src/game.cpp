#include "./game.h"

void jogo()
{
	char tab[LIN][COL], mask[LIN][COL];
	iniciaTabuleiro(tab, 'A'), iniciaTabuleiro(mask, '*');
	display(mask);
}
