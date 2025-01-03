/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utilities.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgenc <emgenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 13:03:41 by emgenc            #+#    #+#             */
/*   Updated: 2024/12/23 13:59:23 by emgenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[i])
		ft_putchar(str[i++]);
	return (i);
}

int	ft_putptr(void *ptr)
{
	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	return (ft_putstr("0x")
		+ ft_put_b((unsigned long long)ptr, 16, "0123456789abcdef"));
}

int	ft_put_b(unsigned long long n, int base, const char *digits)
{
	int	count;

	count = 0;
	if (n >= (unsigned long long)base)
		count += ft_put_b(n / base, base, digits);
	count += ft_putchar(digits[n % base]);
	return (count);
}

int	ft_putnbr(long long n, int base, const char *digits)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count += ft_putchar('-');
		return (count + ft_put_b(-n, base, digits));
	}
	return (count + ft_put_b(n, base, digits));
}
