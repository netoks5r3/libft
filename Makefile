NAME = libft.a

SOURCES = ft_atoi.c ft_bzero.c ft_calloc.c 

SOURCES += ft_isalnum.c ft_isalpha.c ft_isascii.c
SOURCES += ft_isdigit.c ft_isprint.c ft_itoa.c
SOURCES += ft_memchr.c ft_memcmp.c ft_memcpy.c
SOURCES += ft_memmove.c ft_memset.c ft_putchar_fd.c
SOURCES += ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c
SOURCES += ft_split.c ft_strchr.c ft_strdup.c
SOURCES += ft_striteri.c ft_strjoin.c ft_strlcat.c
SOURCES += ft_strlcpy.c ft_strlen.c ft_strmapi.c
SOURCES += ft_strncmp.c ft_strnstr.c ft_strrchr.c
SOURCES += ft_strtrim.c ft_substr.c ft_tolower.c
SOURCES += ft_toupper.c

OBJECTS = $(SOURCES:.c=.o)
CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -f


all:	$(NAME)

$(NAME): $(OBJECTS)
	ar -rc $(NAME) $(OBJECTS)

$(OBJECTS):	$(SOURCES)
	$(CC) $(FLAGS) -c $(SOURCES)

clean:
	$(RM) $(OBJECTS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re