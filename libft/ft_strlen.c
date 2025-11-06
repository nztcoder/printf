/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/08 17:58:06 by oznachki      #+#    #+#                 */
/*   Updated: 2025/10/14 10:10:58 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *c)
{
	size_t	counter;

	counter = 0;
	while (c[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

// int main(void)
// {
// 	char *s = "123456";
// 	printf("%zu\n", ft_strlen(s));
// }