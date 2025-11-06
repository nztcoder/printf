/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/14 10:15:26 by oznachki      #+#    #+#                 */
/*   Updated: 2025/11/01 13:09:11 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	counter;
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = 0;
	while (dst_len < size && dst[dst_len] != '\0')
	{
		dst_len++;
	}
	counter = 0;
	if (size <= dst_len)
		return (size + src_len);
	while ((dst_len + counter + 1 < size) && (src[counter] != '\0'))
	{
		dst[dst_len + counter] = src[counter];
		counter++;
	}
	dst[dst_len + counter] = '\0';
	return (dst_len + src_len);
}

// int	main(void)
// {
// 	char str1[10] = "123";
// 	char str2[] = "456789";
// 	strlcat(str1, str2, 6);
// 	printf("orig: %s\n", str1);
// 	char str3[10] = "123";
// 	char str4[] = "456789";
// 	ft_strlcat(str3, str4, 6);
// 	printf("mine: %s\n", str3);
// 	return (0);
// }
