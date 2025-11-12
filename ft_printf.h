/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: oznachki <oznachki@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/06 16:08:04 by oznachki      #+#    #+#                 */
/*   Updated: 2025/11/11 13:41:49 by oznachki      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h> //	multiple args
# include <unistd.h> //	write
# include "libft/libft.h"

int	ft_printf(const char *format, ...);
int	handle_format(char c, va_list *args);
int	print_char(int c);
int	print_str(char *str);
int	print_int(long long n);
int	print_hex(unsigned int n, char c);
int	print_ptr(void *ptr);

#endif