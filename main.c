#include <stdio.h>
#include "display.h"
#include "init.h"

int main()
{
	printf("Chess !\n");
	int b[8][8];
	initialize_board(b);
	print_board(b);

	return 0;
}
