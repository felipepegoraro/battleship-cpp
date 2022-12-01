#include <iostream>
#include <string>
#include <time.h>
#include "./src/utils.h"
#include "./src/game.h"

using namespace std;

int main(void)
{
	int opc = 0;

	while (opc < 1 || opc > 3){
		opc = menuInicial();
		switch (opc) {
			case 1:
				jogo(); 
				break;
			case 2:
				cout << "sobre";
				break;
			case 3: 
				cout << "saindo..." << endl;
				break;
		}
	}

	return(EXIT_SUCCESS);
}
