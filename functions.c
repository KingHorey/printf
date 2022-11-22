#include "main.h"
#include <stdio.h>

/**
  * character - Function prints character when %c is used
  * @parameter: variable that holds a va_list of arguments
  * Return: returns a character value
  */

int character(va_list parameter)
{
	int x;

	x = va_arg(parameter, int);
	_putchar(x);
	return (1);
}

/**
  * string_character - Function prints string when %s is used
  * @parameter: variable that holds a va_list of arguments
  * Return: returns a character value
  */

int string_character(va_list parameter)
{
	int str_counter;
	char *str;

	str = va_arg(parameter, char*);

	for (str_counter = 0; str[str_counter] != '\0'; str_counter++)
	{
		_putchar(str[str_counter]);
	}
	return (str_counter);
}

