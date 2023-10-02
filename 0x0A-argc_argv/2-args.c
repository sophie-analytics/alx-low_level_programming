#include <stdio.h>

/**
 * main - A function
 * @argv: Argument vector
 * @argc: Argument count
 * Return: The result
 */
int main(int argc, char *argv[])
{
	int i, num;

	num = argc;

	if (num > 0)
{
	for (i = 0; i < num; i++)
{
	printf("%s\n", argv[i]);
}
}
	return (0);
}
