/*
A
A B
A B C
A B C D
A B C D E

*/
#include <stdio.h>

int main()
{
	
for (int row = 0; row <= 5; row++)
	{
		for (int col = 0; col <= row; col++)
		{
			printf("%c ", 'A' + col);
		}
		printf("\n");
	}
	

	return 0;
}
