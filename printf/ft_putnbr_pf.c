/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: georgios-arvanitidis <georgios-arvaniti    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:05:08 by georgios-ar       #+#    #+#             */
/*   Updated: 2026/09/27 14:35:47 by georgios-ar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_pf(int n, int *print_counter)
{
	char	c;

	if (n == -2147483648)
	{
		ft_putstr_pf ("-2147483648", print_counter);
		return ;
	}
	else if (n < 0)
	{
		ft_putchar_pf ('-', print_counter);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_pf (n / 10, print_counter);
		ft_putnbr_pf (n % 10, print_counter);
	}
	else if (n >= 0)
	{
		c = n + '0';
		ft_putchar_pf (c, print_counter);
	}
}
