/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/09 14:42:48 by oznachki      #+#    #+#                 */
/*   Updated: 2025/10/31 17:19:48 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int letter)
{
	if (letter >= 'a' && letter <= 'z')
		letter -= 32;
	return (letter);
}

// int	main(void)
// {
// 	char a = '0';
// 	char b = 'b';
// 	char c = 'c';
// 	printf("%c\n", ft_toupper(a));
// 	printf("%c\n", ft_toupper(b));
// 	printf("%c\n", ft_toupper(c));
// 	return (0);
// }