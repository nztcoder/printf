/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/26 12:50:20 by oznachki      #+#    #+#                 */
/*   Updated: 2025/10/26 13:39:23 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	counter;

	counter = 0;
	if (!s)
		return ;
	while (s[counter] != '\0')
	{
		write(fd, &s[counter], 1);
		counter++;
	}
}

// int main(void)
// {
// 	char *str = "abcdef";
// 	ft_putstr_fd(str, 1);
// 	return (0);
// }
