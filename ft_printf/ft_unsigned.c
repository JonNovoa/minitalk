/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnovoa-a <jnovoa-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:17:06 by jnovoa-a          #+#    #+#             */
/*   Updated: 2025/05/07 19:32:33 by jnovoa-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
	{
		count += ft_unsigned(n / 10);
	}
	count += ft_putchar((n % 10) + '0');
	return (count);
}

/* int main(void)
{
    unsigned int num = 123145;
    int count = ft_put_unsigned(num);
    return (0);
} */