/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/13 17:30:49 by oznachki      #+#    #+#                 */
/*   Updated: 2025/10/31 17:19:15 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	counter;
	size_t	src_len;

	counter = 0;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while (counter < size - 1 && src[counter] != '\0')
	{
		dst[counter] = src[counter];
		counter++;
	}
	dst[counter] = '\0';
	return (src_len);
}

// int	main(void)
// {
// 	char dest[6];
// 	char *src = "Hello!";
// 	printf("%zu\n", ft_strlcpy(dest, src, 4));
// 	printf("%s\n", dest);
// 	return (0);
// }