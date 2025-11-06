/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/29 13:13:55 by oznachki      #+#    #+#                 */
/*   Updated: 2025/10/29 14:00:58 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	str_len;
	size_t	counter;
	char	*res;

	if (!s || !f)
		return (NULL);
	str_len = ft_strlen(s);
	res = malloc(str_len + 1);
	if (!res)
		return (NULL);
	counter = 0;
	while (counter < str_len)
	{
		res[counter] = f((unsigned int)counter, s[counter]);
		counter++;
	}
	res[counter] = '\0';
	return (res);
}
