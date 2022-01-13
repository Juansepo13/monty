#include "monty.h"
/**
 * main - main function
 * @argc: count of arguments
 * @argv: pointer to array containing the arguments
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */

int main(int argc, char *argv[])
{
	FILE *fp;

	(void)fp;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\12");
		exit(EXIT_FAILURE);
	}

	fp = fopen(argv[1], "r");
	if (!fp)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	readfile(fp);
	fclose(fp);
	return (EXIT_SUCCESS);
}
