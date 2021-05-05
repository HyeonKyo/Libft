CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard *.c)
OBJS = $(SRCS: .c=.o)
AR = ar -rc
NAME = libft.a
RM = rm -f

all	:		$(NAME)

$(NAME)	:	$(OBJS)
			$(AR) $(NAME) $(OBJS)

%.o		:	%.c %.h	
			$(CC) $(CFLAGS) -c $< -o $@

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
