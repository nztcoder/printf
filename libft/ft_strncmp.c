/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/10 16:38:37 by oznachki      #+#    #+#                 */
/*   Updated: 2025/10/28 15:32:25 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	if (n == 0)
		return (0);
	while ((s1[index] != '\0' && s2[index] != '\0') && (index < n - 1))
	{
		if (s1[index] != s2[index])
		{
			return ((unsigned char)s1[index] - (unsigned char)s2[index]);
		}
		index++;
	}
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}

// int main(void)
// {
// 	char mystr1[] = "ABC";
// 	char mystr2[] = "AB";
// 	printf("orig: %d\n", strncmp(mystr1, mystr2, 3));
// 	printf("my:   %d\n", ft_strncmp(mystr1, mystr2, 3));
// 	return (0);
// }
