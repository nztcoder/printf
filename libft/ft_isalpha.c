/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/07 14:56:34 by oznachki      #+#    #+#                 */
/*   Updated: 2025/10/31 17:18:11 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	char	c;
// 	int		d;
// 	c = 'A';
// 	d = 0;
// 	printf("%d \n", ft_isalpha(c));
// 	printf("%d \n", ft_isalpha(d));
// }