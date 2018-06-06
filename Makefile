# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: florientakoudad <florientakoudad@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/06 16:18:40 by florientako       #+#    #+#              #
#    Updated: 2018/06/06 16:31:34 by florientako      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean $(NAME) re fclean all
.SILENT:

Name = libft.a

# Compilation

CC = gcc
Flags = -Wall -Werror -Wextra

# Dossiers

SRCDIR = src
INCDIR = includes
OBJDIR = obj

# Sources

SRC =\
		Chars/ft_isalnum.c \
		Chars/ft_isalpha.c \
		Chars/ft_isascii.c \
		Chars/ft_isprint.c \
		Chars/ft_putchar.c \
		Chars/ft_tolower.c \
		Chars/ft_toupper.c \
		Chars/ft_putchar_fd.c \
		Lists/ft_lstadd.c \
		Lists/ft_lstdel.c \
		Lists/ft_lstdelone.c \
		Lists/ft_lstiter.c \
		Lists/ft_lstmap.c \
		Lists/ft_lstnew.c \
		Memory/ft_bzero.c \
		Memory/ft_memalloc.c \
		Memory/ft_memccpy.c \
		Memory/ft_memchr.c \
		Memory/ft_memcmp.c \
		Memory/ft_memcpy.c \
		Memory/ft_memdel.c \
		Memory/ft_memmove.c \
		Memory/ft_memset.c \
		Numbers/ft_atoi_base.c \
		Numbers/ft_atoi.c \
		Numbers/ft_itoa.c \
		Numbers/ft_putnbr_base.c \
		Numbers/ft_putnbr.c \
		Numbers/ft_putnbr_fd.c \
		Strings/ft_putendl_fd.c \
		Strings/ft_putendl.c \
		Strings/ft_putstr.c \
		Strings/ft_putstr_fd.c \
		Strings/ft_strcat.c \
		Strings/ft_strchr.c \
		Strings/ft_strclr.c \
		Strings/ft_strcmp.c \
		Strings/ft_strcpy.c \
		Strings/ft_strdel.c \
		Strings/ft_strdup.c \
		Strings/ft_strequ.c \
		Strings/ft_striter.c \
		Strings/ft_striteri.c \
		Strings/ft_strjoin.c \
		Strings/ft_strlcat.c \
		Strings/ft_strlen.c \
		Strings/ft_strmap.c \
		Strings/ft_strmapi.c \
		Strings/ft_strncat.c \
		Strings/ft_strncmp.c \
		Strings/ft_strncpy.c \
		Strings/ft_strndup.c \
		Strings/ft_strnequ.c \
		Strings/ft_strnew.c \
		Strings/ft_strnstr.c \
		Strings/ft_strrchr.c \
		Strings/ft_strsplit.c \
		Strings/ft_strstr.c \
		Strings/ft_strsub.c \
		Stringstrings/ft_strtrim.c \
		Tabs/ft_advanced_sort_wordtab.c \
		Tabs/ft_sort_wordtab.c \
		Tabs/ft_tablen.c

# **************************************************************************** #

# SPECIAL CHARS

LOG_CLEAR		= \033[2K
LOG_UP 			= \033[A
LOG_NOCOLOR		= \033[0m
LOG_BLACK		= \033[1;30m
LOG_RED			= \033[1;31m
LOG_GREEN		= \033[1;32m
LOG_YELLOW		= \033[1;33m
LOG_BLUE		= \033[1;34m
LOG_VIOLET		= \033[1;35m
LOG_CYAN		= \033[1;36m
LOG_WHITE		= \033[1;37m

# **************************************************************************** #

SRCS = $(addprefix $(SRCDIR)/, $(SRC))
OBJS = $(addprefix $(OBJDIR)/, $(addsuffix .o, $(basename $(SRC))))
OBJS_DIRS = $(sort $(dir $(OBJS)))

INCS_DIRS = $(addsuffix /, $(INCDIR))
INCS = $(addprefix -I , $(INCS_DIRS))

all: $(NAME)

$(NAME): build $(LIBS) $(OBJS)
	echo "$(LOG_CLEAR)$(NAME)... $(LOG_CYAN)assembling...$(LOG_NOCOLOR)$(LOG_UP)"
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	echo "$(LOG_CLEAR)$(NAME)... $(LOG_GREEN)compiled $(LOG_GREEN)✓$(LOG_NOCOLOR)"
build:
	mkdir -p $(OBJDIR)
	mkdir -p $(OBJS_DIRS)
clean:
	rm -f $(LIBS)
	rm -Rf $(OBJS_DIRS)
	rm -Rf $(OBJDIR)
fclean: clean
	rm -f $(NAME)
re: fclean all

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	echo "$(LOG_CLEAR)$(NAME)... $(LOG_YELLOW)$<$(LOG_NOCOLOR)$(LOG_UP)"
	$(CC) -c -o $@ $< $(INCS) $(FLAGS)