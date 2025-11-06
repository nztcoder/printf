/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/29 14:08:13 by oznachki      #+#    #+#                 */
/*   Updated: 2025/10/29 14:24:44 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	str_len;
	size_t	counter;

	if (!s || !f)
		return ;
	str_len = ft_strlen(s);
	counter = 0;
	while (counter < str_len)
	{
		f((unsigned int)counter, &s[counter]);
		counter++;
	}
}
