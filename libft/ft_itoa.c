/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/28 16:43:37 by oznachki      #+#    #+#                 */
/*   Updated: 2025/10/31 17:10:14 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_get_len(long n, int is_negative)
{
	size_t	len;
	long	tmp;

	len = is_negative;
	tmp = n;
	if (tmp == 0)
		return (len + 1);
	while (tmp > 0)
	{
		tmp = tmp / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		is_negative;
	size_t	len;
	char	*result;
	long	nb;

	nb = n;
	is_negative = 0;
	if (nb < 0)
	{
		nb = -nb;
		is_negative = 1;
	}
	len = ft_get_len(nb, is_negative);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	while (len > 0)
	{
		result[--len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (is_negative == 1)
		result[0] = '-';
	return (result);
}

// int	main(void)
// {
// 	int test1 = 5;
// 	int test2 = -42;
// 	int test3 = -2147483647;
// 	int test4 = 13371337;
// 	printf("%s\n", ft_itoa(test1));
// 	printf("%s\n", ft_itoa(test2));
// 	printf("%s\n", ft_itoa(test3));
// 	printf("%s\n", ft_itoa(test4));
// 	return (0);
// }
