/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: georgios-arvanitidis <georgios-arvaniti    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:04:52 by georgios-ar       #+#    #+#             */
/*   Updated: 2026/09/27 14:35:38 by georgios-ar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr_pf(unsigned int n, int *print_counter)
{
	if (n < 10)
		ft_putchar_pf(n + '0', print_counter);
	else
	{
		ft_putunbr_pf(n / 10, print_counter);
		ft_putunbr_pf(n % 10, print_counter);
	}
}
