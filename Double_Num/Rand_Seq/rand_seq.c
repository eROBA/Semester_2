#include <stdio.h>
#include <stdlib.h> 
#define MAXIMUM 1000

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		printf("Keine Eingabe von Parametern! \n");
		system("Pause");
		exit(EXIT_FAILURE);
	}
	else
	{
		int counter = atoi(argv[1]);
		srand(time(0));
		for (int i = 0; i < counter; i++)
		{
			printf("%d\n", rand() % MAXIMUM);
		}
		exit(EXIT_SUCCESS);
	}
}