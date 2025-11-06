/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/21 14:43:48 by oznachki      #+#    #+#                 */
/*   Updated: 2025/10/28 16:35:20 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*copy_of_str;
	size_t	counter;

	counter = 0;
	copy_of_str = malloc(ft_strlen(str) + 1);
	if (copy_of_str == NULL)
		return (NULL);
	while (str[counter])
	{
		copy_of_str[counter] = str[counter];
		counter++;
	}
	copy_of_str[counter] = '\0';
	return (copy_of_str);
}

// int	main(void)
// {
// 	char *test = "You were born an original. Don't die a copy";
// 	printf("%s\n", ft_strdup(test));
// 	return (0);
// }