/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/15 17:04:13 by oznachki      #+#    #+#                 */
/*   Updated: 2025/10/31 17:19:28 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i_counter;
	size_t	j_counter;

	i_counter = 0;
	if (little[0] == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (i_counter < len && big[i_counter] != '\0')
	{
		j_counter = 0;
		while ((i_counter + j_counter) < len
			&& little[j_counter] != '\0'
			&& big[i_counter + j_counter] == little[j_counter])
		{
			j_counter++;
		}
		if (little[j_counter] == '\0')
			return ((char *)big + i_counter);
		i_counter++;
	}
	return (NULL);
}

// int main(void)
// {
// 	const char *largestring = "Check it in test string";
//     const char *smallstring = "test";
//     char *ptr;
//     ptr = strnstr(largestring, smallstring, 50);
// 	printf("%s\n", ptr);
// 	return (0);
// }