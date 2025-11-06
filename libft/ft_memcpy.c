/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/12 11:51:57 by oznachki      #+#    #+#                 */
/*   Updated: 2025/10/28 16:33:30 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	counter;

	if (!dst && !src)
		return (dst);
	counter = 0;
	while (counter < n)
	{
		((unsigned char *)dst)[counter] = ((unsigned char *)src)[counter];
		counter++;
	}
	return (dst);
}

// int main(void)
// {
// 	const char src[50] = "test123";
// 	char dst[50];
// 	int src2 = 12345;
// 	int dst2 = 3;
// 	ft_memcpy(dst, src, 2);
// 	dst[2] = '\0';
// 	printf("%s\n", dst);
// 	ft_memcpy(&dst2, &src2, 4);
// 	printf("%d\n", dst2);
// 	return (0);
// }
