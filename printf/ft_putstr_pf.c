/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: georgios-arvanitidis <georgios-arvaniti    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:05:01 by georgios-ar       #+#    #+#             */
/*   Updated: 2026/09/27 16:30:18 by georgios-ar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_pf(char *s, int *print_counter)
{
	int	i;

	i = 0;
	if (!s)
	{
		ft_putstr_pf("(null)", print_counter);
		return ;
	}
	while (s[i])
	{
		ft_putchar_pf(s[i], print_counter);
		i++;
	}
}
