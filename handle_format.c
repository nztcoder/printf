/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   handle_format.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/06 18:32:43 by oznachki      #+#    #+#                 */
/*   Updated: 2025/11/11 13:49:15 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	handle_format(char c, va_list *args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += print_char(va_arg(*args, int));
	else if (c == 's')
		count += print_str(va_arg(*args, char *));
	else if (c == 'i' || c == 'd')
		count += print_int(va_arg(*args, int));
	else if (c == 'u')
		count += print_int(va_arg(*args, unsigned int));
	else if (c == 'x' || c == 'X')
		count += print_hex(va_arg(*args, unsigned int), c);
	else if (c == 'p')
		count += print_ptr(va_arg(*args, void *));
	else if (c == '%')
		count += print_char('%');
	return (count);
}
