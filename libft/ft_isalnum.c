/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/07 16:15:16 by oznachki      #+#    #+#                 */
/*   Updated: 2025/10/14 10:09:07 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
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
// 	printf("%d \n", ft_isalnum(c));
// 	printf("%d \n", ft_isalnum(d));
// }