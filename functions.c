#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
<<<<<<< HEAD
  * characters - prints out the number of charatacters
  * @parameter: the argument 
  * Return: number of characters
  */
int characters(va_list parameter)
{
	int c = va_arg(paramenter int);

	putchar (c);
	return 1;
}

/**
  * string_characters - prints out a string
  * @parameter: the argument
  * Return: a string.  
  */
int string_character(va_list parameter)
{
	int i = 0;
	int str =  va_arg(parameter int);

	while (str[i] != '\0')
	{
		i++;
		str++;
		putchar(str);
	}
	return (1)
=======
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
>>>>>>> e30e09a49c21b46310edd9c9c5a30e53f36e6b42

	for (str_counter = 0; str[str_counter] != '\0'; str_counter++)
	{
		_putchar(str[str_counter]);
	}
	return (str_counter);
}

	
