/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/12 15:41:00 by oznachki      #+#    #+#                 */
/*   Updated: 2025/10/31 20:39:48 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			counter;
	unsigned char	*tmp_str;

	tmp_str = (unsigned char *) str;
	counter = 0;
	while (counter < n)
	{
		if (tmp_str[counter] == (unsigned char)c)
			return (tmp_str + counter);
		counter++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char *str1 = "Testing123";
// 	int c = 's';
// 	printf("%p\n", ft_memchr(str1, c, 6));
// 	printf("%p\n", memchr(str1, c, 6));
// 	return (0);
// }
