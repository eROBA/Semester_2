#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996) 

int main(int argc, char* argv[])
{
	FILE* in = stdin;
	char buffer[80 + 1];
	long long number;

	if (in == NULL)
	{
		perror("Error while opening the file.\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		if (argc == 2)
		{
			in = fopen(argv[1], "r");
			if (!in)
			{
				exit(EXIT_FAILURE);
			}
		}
		while (fgets(buffer, 80, in))
		{
			number = 2 * atoll(buffer);
			printf("%lld\n", number);
		}
		if (argc == 2)
		{
			fclose(in);
		}
		exit(EXIT_SUCCESS);
	}
}