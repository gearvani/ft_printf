/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: georgios-arvanitidis <georgios-arvaniti    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 13:40:47 by georgios-ar       #+#    #+#             */
/*   Updated: 2026/09/27 17:04:36 by georgios-ar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>

void	ft_putunbr_pf(unsigned int n, int *print_counter);
int		ft_printf(const char *str, ...);
void	ft_case(va_list argptr, const char *format, int *print_counter);
void	ft_putstr_pf(char *s, int *print_counter);
void	ft_putnbr_pf(int n, int *print_counter);
void	ft_putchar_pf(char c, int *print_counter);
void	ft_putptr_pf(unsigned long n, int *counter);
void	ft_puthexlow_pf(unsigned long n, int *counter);
void	ft_puthexup_pf(unsigned int n, int *counter);

#endif