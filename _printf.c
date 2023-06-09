#include "main.h"
/**
 * _printf - printf function
 * @format: string to print
 * Return: -1 when fail, stringht length when success
 */
int _printf(char *format, ...)
{
	int i = 0;
	size_t print_len = 0;
	va_list ls;
	char buffer[2048];
	int (*con)(va_list, char *, int);

	if (format == NULL || (format[0] == '%' && format[1] == '\0')
			|| (format[0] == '\\' && format[1] == '\0'))
		return (-1);
	va_start(ls, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			buffer[print_len] = format[i];
			print_len++;
		}
		else
		{
			con = get_print_cases(&(format[i + 1]));
			if (con != NULL)
			{
				print_len = con(ls, &buffer[print_len], print_len);
				i++;
			}
			else
			{
				buffer[print_len] = format[i];
				print_len++;
			}
		}
		i++;
	}
	write(1, buffer, print_len);
	va_end(ls);
	return (print_len);
}
