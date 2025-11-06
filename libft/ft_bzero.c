/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/11 17:04:33 by oznachki      #+#    #+#                 */
/*   Updated: 2025/10/31 20:32:00 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n)
	{
		((unsigned char *)str)[counter] = 0;
		counter++;
	}
}

// int	main(void)
// {
// 	char str[10] = "Hello";
// 	printf("Before: \"%s\"\n", str);
// 	ft_bzero(str, 3);
// 	printf("After: as string \"%s\"\n", str);
// 	printf("Bytes after bzero:\n");
// 	int i = 0;
// 	while (i < 10)
// 	{
// 		printf("%d ", (unsigned char)str[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }