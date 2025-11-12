/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_hex.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/10 15:10:59 by oznachki      #+#    #+#                 */
/*   Updated: 2025/11/11 14:03:58 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hex(unsigned int n, char c)
{
	int		count;
	int		i;
	char	*base;
	char	remain[32];

	if (c == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n == 0)
		return (print_char('0'));
	count = 0;
	while (n > 0)
	{
		remain[count] = base[n % 16];
		n /= 16;
		count++;
	}
	i = count;
	while (i > 0)
	{
		print_char(remain[i - 1]);
		i--;
	}
	return (count);
}
