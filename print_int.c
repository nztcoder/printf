/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_int.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/07 16:35:00 by oznachki      #+#    #+#                 */
/*   Updated: 2025/11/11 10:58:35 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_int(long long n)
{
	int	count;

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
		count += print_int(n / 10);
	}
	ft_putchar_fd((n % 10) + '0', 1);
	count++;
	return (count);
}
