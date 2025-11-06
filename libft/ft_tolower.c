/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/09 14:58:37 by oznachki      #+#    #+#                 */
/*   Updated: 2025/10/31 17:19:43 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int letter)
{
	if (letter >= 'A' && letter <= 'Z')
		letter += 32;
	return (letter);
}

// int main(void)
// {
// 	char A = '0';
// 	char B = 'B';
// 	char C = 'Z';
// 	printf("%c\n", ft_tolower(A));
// 	printf("%c\n", ft_tolower(B));
// 	printf("%c\n", ft_tolower(C));
// 	return (0);
// }