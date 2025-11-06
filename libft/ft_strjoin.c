/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/22 19:01:27 by oznachki      #+#    #+#                 */
/*   Updated: 2025/10/25 11:22:02 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_str;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	joined_str = malloc(len_s1 + len_s2 + 1);
	if (!joined_str)
		return (NULL);
	ft_memcpy(joined_str, s1, len_s1);
	ft_memcpy(joined_str + len_s1, s2, len_s2);
	joined_str[len_s1 + len_s2] = '\0';
	return (joined_str);
}

// int main(void)
// {
// 	char *str1 = "12345";
// 	char *str2 = "abcdef";
// 	printf("%s\n", ft_strjoin(str1, str2));
// 	return (0);
// }
