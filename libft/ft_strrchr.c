/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/14 14:23:51 by oznachki      #+#    #+#                 */
/*   Updated: 2025/10/31 17:19:35 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len_s;

	len_s = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)s + len_s);
	while (len_s > 0)
	{
		len_s--;
		if (s[len_s] == (char)c)
			return ((char *)s + len_s);
	}
	return (NULL);
}

// int	main(void)
// {
// 	char *str = "ABCDEFG";
// 	printf("%s\n", strrchr(str, 'C'));
// 	printf("%s\n", ft_strrchr(str, 'C'));
// 	return (0);	
// }