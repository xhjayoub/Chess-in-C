#include <stddef.h>
#include <stdio.h>


void print_board(int b[8][8])
{
	int i, j;


	for (i = 0;i < 8; i++) {
		printf("|");
		for (j = 0; j < 8; j++) {
			if (b[i][j] == 0)
				printf("  |");
			else
				printf(" %c| ");
		}
		printf("\n");
	}
}
