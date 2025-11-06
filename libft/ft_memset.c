/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/11 16:00:08 by oznachki      #+#    #+#                 */
/*   Updated: 2025/10/13 11:39:40 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n)
	{
		((unsigned char *)str)[counter] = (unsigned char)c;
		counter++;
	}
	return (str);
}

// int main(void)
// {
// 	char str[50];
// 	ft_memset(str, 'H', 3);
// 	str[3] = '\0';
// 	printf("%s\n", str);
// 	return (0);
// }
