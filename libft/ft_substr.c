/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/21 15:44:03 by oznachki      #+#    #+#                 */
/*   Updated: 2025/10/28 15:53:02 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res_str;
	size_t	counter;
	size_t	len_s;

	counter = 0;
	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	if (len > len_s - start)
		len = len_s - start;
	res_str = malloc(len + 1);
	if (res_str == NULL)
		return (NULL);
	while (counter < len)
	{
		res_str[counter] = s[start];
		counter++;
		start++;
	}
	res_str[counter] = '\0';
	return (res_str);
}

// int main(void)
// {
// 	char *s1 = "123456789abcde";
// 	char *new = ft_substr(s1, 6, 6);
// 	printf("%s\n", new);
//	free(new);
// 	return (0);
// }