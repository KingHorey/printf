#include <stdio.h>
#include <stdarg.h>
/**
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


	
