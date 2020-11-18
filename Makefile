# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rvan-duy <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/31 18:02:57 by rvan-duy      #+#    #+#                  #
#    Updated: 2020/11/18 13:45:50 by rvan-duy      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_atoi.c \
	   ft_bzero.c \
	   ft_calloc.c \
	   ft_isalnum.c \
	   ft_isalpha.c \
	   ft_isascii.c \
	   ft_isdigit.c \
	   ft_isprint.c \
	   ft_memccpy.c \
	   ft_memcpy.c \
	   ft_memmove.c \
	   ft_memset.c \
	   ft_strdup.c \
	   ft_strlcpy.c \
	   ft_strlcat.c \
	   ft_strlen.c \
	   ft_tolower.c \
	   ft_toupper.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strnstr.c \
	   ft_strncmp.c \
	   ft_substr.c \
	   ft_strjoin.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \
	   ft_itoa.c \
	   ft_strmapi.c \
	   ft_strtrim.c \
	   ft_split.c

BONUS = ft_lstnew_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstmap_bonus.c

O.SRCS = $(SRCS:.c=.o)
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(O.SRCS)
	@echo "Creating library..."
	@ar rc $(NAME) $(O.SRCS)

$(O.SRCS):
	@echo "Building object files..."
	@gcc -c $(FLAGS) $(SRCS)

clean:
	@echo "Removing 'o' objects..."
	@rm -f *.o

fclean: clean
	@echo "Removing $(NAME)..."
	@rm -f $(NAME)

re: fclean all
