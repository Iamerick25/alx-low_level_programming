#include "main.h"
#include <stdlib.h>

/**
  * str_concat - concatenates two strings
  * @s1: First string
  * @s2: Second string
  *
  * Return: NULL on failure
  */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int len_s1 = 0;
	int len_s2 = 0;
	int i = 0;
	int total_len;

	if (!s1 || !s2)
	{
		s1 = "";
		s2 = "";
	}

	while (s1[len_s1])
		len_s1++;

	while (s2[len_s2])
		len_s2++;

	total_len = len_s1 + len_s2;

	s = (char *)malloc(sizeof(char) * (total_len + 1));

	if (s == 0)
		return (0);

	for (i = 0; i < len_s1; i++)
		s[i] = s1[i];

	for (i = 0; i < len_s2; i++)
		s[i + len_s1] = s2[i];

	s[total_len] = ('\0');

	return (s);
}
