#include "variadic_functions.h"
#include <string.h>

/**
 * switch_f_and_print - switch format chars one by one and print accordingly
 * @f: format char
 * @ap: va_list var 1
 * @save: va_list var 2
 *
 * Return: 1 if f is a valid case 0 if not
*/

int switch_f_and_print(char f, va_list ap, va_list save)
{
	int is_valid = 0;
	char *s;

	switch (f)
	{
	case 'c':
		is_valid = 1;
		printf("%c", va_arg(ap, int));
		va_arg(save, int);
		break;
	case 'i':
		is_valid = 1;
		printf("%d", va_arg(ap, int));
		va_arg(save, int);
		break;
	case 'f':
		is_valid = 1;
		printf("%f", va_arg(ap, double));
		va_arg(save, double);
		break;
	case 's':
		is_valid = 1;
		s = va_arg(ap, char *);
		if (s != NULL && strlen(s) != 0 && s[0] != ' ')
		{
			printf("%s", va_arg(save, char *));
			break;
		}
		printf("(nil)");
		va_arg(save, char *);
		break;
	}
	return (is_valid);
}

/**
 * print_all - print any num and typ of args
 * @format: string used to determine num and type of args
*/

void print_all(const char * const format, ...)
{
	va_list ap, save;
	unsigned int l;
	unsigned int i = 0;
	char f;

	while (format != NULL)
	{
		l = strlen(format);
		va_start(ap, format);
		va_start(save, format);
		while (i < l && format[i] != '\0')
		{
			f = format[i];
			if (switch_f_and_print(f, ap, save) && i != l - 1)
				printf(", ");
			i++;
		}
		printf("\n");
		va_end(ap);
		va_end(save);
		break;
	}
}
