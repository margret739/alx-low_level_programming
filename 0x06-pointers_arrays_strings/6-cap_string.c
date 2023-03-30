#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes words of a string
 * @str: the string to be capitalized.
 * ' ': parameters to be checked
 * Return: a pointer to the changed string.
 */

char *cap_string(char *)

{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= '0' && str[index] <= 'z'))
			index++;
		if (str[index - 1] == ' ' ||
				str[index - 1] == '\t' ||
				str[index - 1] == '\n' ||
				str[index - 1] == ',' ||
				str[index - 1] == ';' ||
				str[index - 1] == '.' ||
				str[index - 1] == '!' ||
				str[index - 1] == '?' ||
				str[index - 1] == '"' ||
				str[index - 1] == '(' ||
				str[index - 1] == ')' ||
				str[index - 1] == '{' ||
				str[index - 1] == '}' ||
				index == 0)
			str[index] -= 32;
		index++;
	}
	return (str);
}