/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_ptr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/11 10:49:48 by oznachki      #+#    #+#                 */
/*   Updated: 2025/11/11 14:04:23 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_ptr(void *ptr)
{
	unsigned long long	n;
	int					count;
	int					i;
	const char			*base;
	char				remain[32];

	base = "0123456789abcdef";
	n = (unsigned long long)ptr;
	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	i = 0;
	while (n > 0)
	{
		remain[i] = base[n % 16];
		n /= 16;
		i++;
	}
	count = i + 2;
	while (i > 0)
	{
		print_char(remain[i - 1]);
		i--;
	}
	return (count);
}
