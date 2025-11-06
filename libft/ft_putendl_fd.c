/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/26 13:43:16 by oznachki      #+#    #+#                 */
/*   Updated: 2025/10/26 13:59:13 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// int main(void)
// {
// 	char *str = "abcdef";
// 	char *str1 = "123456";
// 	ft_putendl_fd(str, 1);
// 	ft_putendl_fd(str1, 1);
// 	return (0);
// }