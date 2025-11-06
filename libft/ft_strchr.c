/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/09 15:16:17 by oznachki      #+#    #+#                 */
/*   Updated: 2025/10/28 16:38:50 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str == (char)c)
		{
			return ((char *) str);
		}
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (NULL);
}

// int main(void)
// {
// 	char *str = "Test String!";
// 	int c = 'i';
// 	printf("%s\n", ft_strchr(str, c));
// 	return (0);
// }