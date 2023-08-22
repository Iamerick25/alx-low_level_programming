#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char password[9];

	srand(time(0));

	for (i = 0; i < 8; i++)
	{
		password[i] = '!' + rand() % 94;
	}

	password[8] = '\0';

	printf("Generated password: %s\n", password);

	return (0);
}
