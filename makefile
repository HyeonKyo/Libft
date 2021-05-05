CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_bzero.c ft_isprint.c ft_memmove.c ft_split.c ft_strlen.c ft_substr.c ft_calloc.c ft_itoa.c \
	   ft_memset.c ft_strchr.c ft_strmapi.c ft_tolower.c ft_isalnum.c ft_memccpy.c ft_putchar_fd.c \
	   ft_strdup.c ft_strncmp.c ft_toupper.c ft_isalpha.c ft_memchr.c ft_putendl_fd.c ft_strjoin.c \
	   ft_strnstr.c ft_isascii.c ft_memcmp.c ft_putnbr_fd.c ft_strlcat.c ft_strrchr.c ft_isdigit.c \
	   ft_memcpy.c ft_putstr_fd.c ft_strlcpy.c ft_strtrim.c
OBJS = $(SRCS:.c=.o)
AR = ar -rc
NAME = libft.a
RM = rm -f

all		:		$(NAME)

$(NAME)	:	$(OBJS)
			$(AR) $(NAME) $(OBJS)

%.o		:	%.c	
			$(CC) $(CFLAGS) -o $@ -c $< -I.
clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
