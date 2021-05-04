CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard *.c)
OBJS = $(SRCS: .c=.o)
INC = -I./
TARGET = libft

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) $? $(INC) -o $@


.PHONY : clean
	clean :
		rm -f $(OBJS)

fclean : clean

re : fclean all
