#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - The entry point
 * @argv: The argument vector
 * @argc: The number of arguments (argument count)
 * Return: The result
 * *exit*: Status of the error
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (operation == NULL || ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
