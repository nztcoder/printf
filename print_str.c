/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_str.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/07 11:31:49 by oznachki      #+#    #+#                 */
/*   Updated: 2025/11/07 16:24:30 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int print_str(char *str)
{
	int len;

	if(!str)
	{
		write (1, "(null)", 6);
		return (6);
	}
	len = ft_strlen(str);
	write(1, str, len);
	return (len);
}