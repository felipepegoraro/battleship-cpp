#include "./utils.h"
#include <iostream>

void clear()
{
	int res;
	if ((res = system(clean)) < 0){
		perror("system");
		exit(EXIT_FAILURE);
	}
}
