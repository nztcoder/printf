/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/12 13:45:04 by oznachki      #+#    #+#                 */
/*   Updated: 2025/10/13 17:25:22 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;
	size_t			counter;

	tmp_dest = (unsigned char *) dest;
	tmp_src = (unsigned char *) src;
	counter = 0;
	if (tmp_dest == tmp_src)
		return (tmp_dest);
	if (tmp_dest < tmp_src)
	{
		while (counter < n)
		{
			tmp_dest[counter] = tmp_src[counter];
			counter++;
		}
	}
	else
	{
		while (n--)
		{
			tmp_dest[n] = tmp_src[n];
		}
	}
	return (tmp_dest);
}
//!!!!!!!!!while (n--)
//    *tmp_dest++ = *tmp_src++;
// int	main(void)
// {
// 	char str1[20] = "123456789";
// 	char str2[20] = "123456789";
// 	printf("Before:\nstr1: %s\n", str1);
// 	memmove(str1, str1+2, 5);
// 	ft_memmove(str2, str2+2, 5);
// 	printf("\nAfter memmove : %s\n", str1);
// 	printf("After ft_memmove: %s\n", str2);
// 	return (0);
// }
