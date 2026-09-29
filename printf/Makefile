# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: georgios-arvanitidis <georgios-arvaniti    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/23 13:58:40 by georgios-ar       #+#    #+#              #
#    Updated: 2026/09/27 14:34:52 by georgios-ar      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Target library name
NAME        = libftprintf.a

# Compiler and Flags
CC          = cc
CFLAGS      = -Wall -Wextra -Werror
AR          = ar rcs
RM          = rm -f

# Source files visible in your workspace
SRCS        = ft_printf.c \
              ft_putchar_pf.c \
              ft_putnbr_pf.c \
              ft_putstr_pf.c \
              ft_putunbr_pf.c \
              case_ptr_hex_perc.c

# Object files
OBJS        = $(SRCS:.c=.o)

# Header file name requirement
HEADER      = ft_printf.h

# Default rule: Compiles the library
all: $(NAME)

# Rule to archive object files into the static library
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Pattern rule to compile .c files to .o files
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

# Removes object files
clean:
	$(RM) $(OBJS)

# Removes object files and the final library
fclean: clean
	$(RM) $(NAME)

# Cleans and recompiles everything
re: all

.PHONY: all clean fclean re