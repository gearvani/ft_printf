/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_ptr_hex_perc.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: georgios-arvanitidis <georgios-arvaniti    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:05:23 by georgios-ar       #+#    #+#             */
/*   Updated: 2026/09/27 17:04:17 by georgios-ar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr_pf(unsigned long n, int *counter)
{
	if (n == 0)
		ft_putstr_pf("(nil)", counter);
	else
	{
		ft_putstr_pf("0x", counter);
		ft_puthexlow_pf(n, counter);
	}
}

void	ft_puthexlow_pf(unsigned long n, int *counter)
{
	if (n < 16)
	{
		if (n < 10)
			ft_putchar_pf(n + '0', counter);
		else
			ft_putchar_pf(n - 10 + 'a', counter);
	}
	else
	{
		ft_puthexlow_pf(n / 16, counter);
		ft_puthexlow_pf(n % 16, counter);
	}
}

void	ft_puthexup_pf(unsigned int n, int *counter)
{
	if (n < 16)
	{
		if (n < 10)
			ft_putchar_pf(n + '0', counter);
		else
			ft_putchar_pf(n - 10 + 'A', counter);
	}
	else
	{
		ft_puthexup_pf(n / 16, counter);
		ft_puthexup_pf(n % 16, counter);
	}
}
