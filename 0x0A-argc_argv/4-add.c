#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A function
 * @argv: Argument vector
 * @argc: Argument count
 * Return: The result
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc <= 1)
{
	printf("%d\n", 0);
}
	if (argc > 1)
{
	for (i = 1; i < argc; i++)
{
	for (j = 0; argv[i][j] != '\0'; j++)
{
	if (!isdigit(argv[i][j]))
{
	printf("Error");
	break;
	return (1);
}
}
	sum += atoi(argv[i]);
}
}
	printf("%d\n", sum);

	return (0);
}
