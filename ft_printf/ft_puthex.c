/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:17:12 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/05/09 18:51:54 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n, char format)
{
	int		count;
	char	*base;

	count = 0;
	if (format == 'p')
	{
		if (n == 0)
			return (ft_putstr("(nil)"));
		count += ft_putstr("0x");
		base = "0123456789abcdef";
		if (n >= 16)
			count += ft_puthex(n / 16, 'x');
		count += ft_putchar(base[n % 16]);
		return (count);
	}
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_puthex(n / 16, format);
	count += ft_putchar(base[n % 16]);
	return (count);
}

/*
 int main(void)
{
    unsigned long n = 3059;
    ft_puthex(n, 'x');  // Imprime 131 en minúsculas
    write(1, "\n", 1);
    
    ft_puthex(n, 'X');  // Imprime 131 en mayúsculas
    write(1, "\n", 1);

    return 0;
} */