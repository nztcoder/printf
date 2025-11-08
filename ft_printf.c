/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/06 15:40:06 by oznachki      #+#    #+#                 */
/*   Updated: 2025/11/08 19:12:56 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_printf(const char *format, ...)
{
	va_list args;
	int i;
	int count;

	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += handle_format(format[i], &args);
		}
		else
			count += print_char(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}

#include <stdio.h>
int main(void)
{	
	int i = printf("TestOrig: %d-%i\n", 123456789, 24);
	printf("orig: %d\n", i);
	
	int w = ft_printf("TestMine: %d-%i\n", 123456789, 24);
	printf("mine: %d\n", w);
	
	return (0);
}

// You have to implement the following conversions:
// • %c Prints a single character. done
// • %s Prints a string (as defined by the common C convention).
// • %p The void * pointer argument has to be printed in hexadecimal format.
// • %d Prints a decimal (base 10) number. done
// • %i Prints an integer in base 10. done
// • %u Prints an unsigned decimal (base 10) number.
// • %x Prints a number in hexadecimal (base 16) lowercase format.
// • %X Prints a number in hexadecimal (base 16) uppercase format.
// • %% Prints a percent sign.