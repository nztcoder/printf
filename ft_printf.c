/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/06 15:40:06 by oznachki      #+#    #+#                 */
/*   Updated: 2025/11/06 18:08:33 by oznachki      ########   odam.nl         */
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
			if(format[i] == 'c')
			{
				ft_putchar_fd(va_arg(args, int), 1);
				count++;
			}
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}

int main(void)
{
	ft_printf("Testing123...%c\n", 'A');
	return (0);
}
