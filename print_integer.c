/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_integer.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/07 16:35:00 by oznachki      #+#    #+#                 */
/*   Updated: 2025/11/08 18:00:16 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int print_integer(int n)
{
	int count;

	count = 0;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", 1);
		return (11);
	}
	if (n < 0)
	{
		n = -n;
		count++;
		ft_putchar_fd('-', 1);
	}
	if (n >= 10)
	{
		count += print_integer(n / 10);
	}
	ft_putchar_fd((n % 10) + '0', 1);
	count++;
	return (count);
}
