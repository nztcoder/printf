/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/07 16:36:52 by oznachki      #+#    #+#                 */
/*   Updated: 2025/10/31 20:38:21 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// int main(void)
// {
//     int test_char1 = 'a';
//     int test_char2 = ' ';
//     int test_char3 = 150;
//     int test_char4 = 0;
//     printf("test 'a' (97): %d\n", ft_isascii(test_char1)); 
//     printf("test ' ' (32): %d\n", ft_isascii(test_char2));
//     printf("test 150: %d\n", ft_isascii(test_char3));
//     printf("test 0: %d\n", ft_isascii(test_char4));
//     return (0);
// }