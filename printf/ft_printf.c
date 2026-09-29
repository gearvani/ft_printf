/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: georgios-arvanitidis <georgios-arvaniti    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 14:04:25 by georgios-ar       #+#    #+#             */
/*   Updated: 2026/09/29 15:16:14 by georgios-ar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_case(va_list argptr, const char *format, int *print_counter)
{
	if (*format == 'c')
		ft_putchar_pf(va_arg(argptr, int), print_counter);
	else if (*format == 's')
		ft_putstr_pf(va_arg(argptr, char *), print_counter);
	else if (*format == 'i' || *format == 'd')
		ft_putnbr_pf(va_arg(argptr, int), print_counter);
	else if (*format == 'u')
		ft_putunbr_pf(va_arg(argptr, unsigned int), print_counter);
	else if (*format == 'x')
		ft_puthexlow_pf(va_arg(argptr, unsigned int), print_counter);
	else if (*format == 'X')
		ft_puthexup_pf(va_arg(argptr, unsigned int), print_counter);
	else if (*format == 'p')
		ft_putptr_pf((unsigned long)va_arg(argptr, void *), print_counter);
	else if (*format == '%')
		ft_putchar_pf('%', print_counter);
}

int	ft_printf(const char *str, ...)
{
	int		print_counter;
	va_list	argptr;

	print_counter = 0;
	if (!str)
		return (0);
	va_start(argptr, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			ft_case(argptr, str, &print_counter);
		}
		else
			ft_putchar_pf(*str, &print_counter);
		str++;
	}
	va_end(argptr);
	return (print_counter);
}

/*int main()
{
	ft_printf("%  i\nft_printf\n", -2147483648);
	printf("%  i\nprintf\n", -2147483648);
}*/

/*int main()
{
	printf("=====PRINT_F TESTER=====\n\n\n");

	printf("---------CASE: c--------\n\n");
	printf("---------PRINTF---------\n");

	int c = 32;
	int i = 0;

	while (c != 127)
	{
		printf("%c,", c);
		if ((i % 10) == 0)
			printf("\n");
		i++;
		c++;
	}
	
	printf("\n\n");

	printf("--------FT_PRINTF-------\n");
	
	c = 32;
	i = 0;

	while (c != 127)
	{
		ft_printf("%c,", c);
		if ((i % 10) == 0)
			printf("\n");
		i++;
		c++;
	}
	
	printf("\n\n");
	printf("---------CAS		return ;E: s--------\n\n");
	printf("---------PRINTF---------\n");
	int result;
	char str[] = "this is a test";
	result = printf("%s", str);
	printf("\nreturn_value: %i", result);
	
	printf("\n\n");

	printf("--------FT_PRINTF-------\n");
	
	result = ft_printf("%s", str);
	printf("\nreturn_value: %i", result);
	printf("\n\n");
}*/

/*#include <limits.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	int test;

	if (argc != 2)
		return (printf("arg error"), 1);

	if (strcmp(argv[1], "%") == 0)
	{
		i = ft_printf("this is the %% \n");
		test = printf("this is the %% \n");
	}

	if (strcmp(argv[1], "c") == 0)
	{
		char ch = 'c';
		i = ft_printf("this is the character [%c]\n", ch);
		test = printf("this is the character [%c]\n", ch);
	}

	if (strcmp(argv[1], "s") == 0)
	{
		char *s = NULL;
		i = ft_printf("this is the string [%s]\n", s);
		test = printf("this is the string [%s]\n", s);	}

	if (strcmp(argv[1], "i") == 0)
	{
		int nb = -1;
		i = ft_printf("this is the int [%i]\n", nb);
		test = printf("this is the int [%i]\n", nb);
	}

	if (strcmp(argv[1], "d") == 0)
	{
		int nb = -1;
		i = ft_printf("this is the int [%d]\n", nb);
		test = printf("this is the int [%d]\n", nb);
	}

	if (strcmp(argv[1], "u") == 0)
	{
		unsigned int nb = 2147483648;
		i = ft_printf("this is the unsigned int [%u]\n", nb);
		test = printf("this is the unsigned int [%u]\n", nb);
	}

	if (strcmp(argv[1], "x") == 0)
	{
		int nb = -1;
		i = ft_printf("this is the hex [%x]\n", nb);
		test = printf("this is the hex [%x]\n", nb);
	}

	if (strcmp(argv[1], "X") == 0)
	{
		int nb = 47;
		i = ft_printf("this is the HEX [%X]\n", nb);
		test = printf("this is the HEX [%X]\n", nb);
	}

	if (strcmp(argv[1], "p") == 0)
	{
		i = ft_printf(" %p %p \n ", LONG_MIN, LONG_MAX);
		test = printf(" %p %p \n", LONG_MIN, LONG_MAX);
	}

	if (strcmp(argv[1], "empty") == 0)
	{
		i = ft_printf("");
		test = printf("");
	}

	if (strcmp(argv[1], "multi") == 0)
	{
		i = ft_printf("%i, %i, %i\n", 10, 10, 10);
		test = printf("%i, %i, %i\n", 10, 10, 10);
	}
	printf("%i\t%i\n", i, test);
}*/