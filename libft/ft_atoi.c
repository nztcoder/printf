/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/27 14:27:07 by oznachki      #+#    #+#                 */
/*   Updated: 2025/10/27 16:22:43 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	counter;
	int		sign;
	int		result;

	counter = 0;
	sign = 1;
	result = 0;
	while ((nptr[counter] >= 9 && nptr[counter] <= 13) || (nptr[counter] == 32))
		counter++;
	if (nptr[counter] == '-' || nptr[counter] == '+')
	{
		if (nptr[counter] == '-')
			sign = -1;
		counter++;
	}
	while (nptr[counter] >= '0' && nptr[counter] <= '9')
	{
		result = result * 10 + (nptr[counter] - '0');
		counter++;
	}
	return (result * sign);
}

// int main(void)
// {
// 	char *str = "    \t\v\r -12345";
// 	printf("%d\n", ft_atoi(str));
// 	return (0);
// }
