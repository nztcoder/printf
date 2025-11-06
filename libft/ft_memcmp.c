/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/14 15:30:43 by oznachki      #+#    #+#                 */
/*   Updated: 2025/10/31 17:18:42 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;
	size_t			counter;

	tmp_s1 = (unsigned char *)s1;
	tmp_s2 = (unsigned char *)s2;
	counter = 0;
	if (n == 0)
		return (0);
	while (counter < n)
	{
		if (tmp_s1[counter] != tmp_s2[counter])
			return (tmp_s1[counter] - tmp_s2[counter]);
		counter++;
	}
	return (0);
}

// int main(void)
// {
// 	char *str1 = "ABCDE";
// 	char *str2 = "ABCD";
// 	printf("%d\n", memcmp(str1, str2, 5));
// 	printf("%d\n", ft_memcmp(str1, str2, 5));
// 	return (0);
// }