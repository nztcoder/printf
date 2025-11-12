/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/06 15:40:06 by oznachki      #+#    #+#                 */
/*   Updated: 2025/11/12 12:04:09 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_invalid_format(const char *format, int i)
{
	if (format[i] == '\0' || !ft_strchr("cspdiuxX%", format[i]))
		return (1);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	if (!format)
		return (-1);
	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (is_invalid_format(format, i))
				return (va_end(args), -1);
			count += handle_format(format[i], &args);
		}
		else
			count += print_char(format[i]);
		i++;
	}
	va_end(args);
	return (count);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	orig;
// 	int	mine;
// 	char	c = 'A';
// 	char	*str = "Hello, world!";
// 	void	*ptr = str;
// 	int		num = -12345;
// 	unsigned int	u = 4294967295U;
// 	printf("\n===== TEST 1: %%c =====\n");
// 	orig = printf("orig: %c\n", c);
// 	mine = ft_printf("mine: %c\n", c);
// 	printf("return orig = %d | mine = %d\n\n", orig, mine);
// 	printf("===== TEST 2: %%s =====\n");
// 	orig = printf("orig: %s\n", str);
// 	mine = ft_printf("mine: %s\n", str);
// 	printf("return orig = %d | mine = %d\n\n", orig, mine);
// 	printf("===== TEST 3: %%s (NULL) =====\n");
// 	orig = printf("orig: %s\n", (char *)NULL);
// 	mine = ft_printf("mine: %s\n", (char *)NULL);
// 	printf("return orig = %d | mine = %d\n\n", orig, mine);
// 	printf("===== TEST 4: %%p =====\n");
// 	orig = printf("orig: %p\n", ptr);
// 	mine = ft_printf("mine: %p\n", ptr);
// 	printf("return orig = %d | mine = %d\n\n", orig, mine);
// 	printf("===== TEST 5: %%p (NULL) =====\n");
// 	orig = printf("orig: %p\n", (void *)NULL);
// 	mine = ft_printf("mine: %p\n", (void *)NULL);
// 	printf("return orig = %d | mine = %d\n\n", orig, mine);
// 	printf("===== TEST 6: %%d / %%i =====\n");
// 	orig = printf("orig: %d %i\n", num, num);
// 	mine = ft_printf("mine: %d %i\n", num, num);
// 	printf("return orig = %d | mine = %d\n\n", orig, mine);
// 	printf("===== TEST 7: %%u =====\n");
// 	orig = printf("orig: %u\n", u);
// 	mine = ft_printf("mine: %u\n", u);
// 	printf("return orig = %d | mine = %d\n\n", orig, mine);
// 	printf("===== TEST 8: %%x / %%X =====\n");
// 	orig = printf("orig: %x %X\n", u, u);
// 	mine = ft_printf("mine: %x %X\n", u, u);
// 	printf("return orig = %d | mine = %d\n\n", orig, mine);
// 	printf("===== TEST 9: %%%% =====\n");
// 	orig = printf("orig: %%\n");
// 	mine = ft_printf("mine: %%\n");
// 	printf("return orig = %d | mine = %d\n\n", orig, mine);
// 	printf("===== TEST 10: empty string =====\n");
// 	orig = printf("orig: %s\n", "");
// 	mine = ft_printf("mine: %s\n", "");
// 	printf("return orig = %d | mine = %d\n\n", orig, mine);
// 	printf("===== TEST 11: mix all =====\n");
// 	orig = printf("orig: %c %s %p %d %i %u %x %X %%\n",
// 		c, str, ptr, num, num, u, u, u);
// 	mine = ft_printf("mine: %c %s %p %d %i %u %x %X %%\n",
// 		c, str, ptr, num, num, u, u, u);
// 	printf("return orig = %d | mine = %d\n\n", orig, mine);
// 	printf("===== TEST 12: single %% =====\n");
// 	mine = ft_printf("%");
// 	printf("mine (single %%) = %d\n\n", mine);
// 	printf("===== TEST 13: %%d%% =====\n");
// 	mine = ft_printf("%d%", 123);
// 	printf("mine (%%d%%) = %d\n\n", mine);
// 	printf("===== TEST 14: invalid specifier %%q =====\n");
// 	mine = ft_printf("%q");
// 	printf("mine (%%q) = %d\n\n", mine);
// 	printf("===== TEST 15: NULL format =====\n");
// 	mine = ft_printf(NULL);
// 	printf("mine (NULL format) = %d\n\n", mine);
// 	return (0);
// }