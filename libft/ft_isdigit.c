/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/07 16:05:23 by oznachki      #+#    #+#                 */
/*   Updated: 2025/10/31 17:18:23 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	char	c;
// 	int		d;
// 	c = 9;
// 	d = 6;
// 	printf("%d \n", ft_isdigit(c));
// 	printf("%d \n", ft_isdigit(d));
// }