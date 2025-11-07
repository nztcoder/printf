/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   handle_format.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/06 18:32:43 by oznachki      #+#    #+#                 */
/*   Updated: 2025/11/07 16:34:47 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h" 

int	handle_format(char c, va_list *args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += print_char(va_arg(*args, int));
	else if (c == 's')
		count += print_str(va_arg(*args, char *));
	else if (c == 'i' || c == 'd')
		count += print_integer(va_arg(*args, int));
		 
	return (count);
}


// You have to implement the following conversions:
// • %c Prints a single character. done!
// • %s Prints a string (as defined by the common C convention). done!
// • %p The void * pointer argument has to be printed in hexadecimal format.
// • %d Prints a decimal (base 10) number.
// • %i Prints an integer in base 10.
// • %u Prints an unsigned decimal (base 10) number.
// • %x Prints a number in hexadecimal (base 16) lowercase format.
// • %X Prints a number in hexadecimal (base 16) uppercase format.
// • %% Prints a percent sign.