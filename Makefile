NAME = libft.a
LIBFT_BONUS = libft_bonus.a
CFLAGS = -Wall -Wextra -Werror
HEADERS = libft.h
SRC =  	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strncpy.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c

OBJ =  $(SRC:.c=.o)

SRC_B = ft_lstadd_back_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstmap_bonus.c \
		ft_lstnew_bonus.c \
		ft_lstsize_bonus.c

OBJ_B = $(SRC_B:.c=.o)

all: $(NAME)

bonus: $(OBJ) $(OBJ_B)
	ar rcs $(LIBFT_BONUS) $^


%.o: %.c $(HEADERS)
	gcc $(CFLAGS)  -o $@ -c $<

$(NAME): $(OBJ)
	ar rcs $(NAME) $^

clean:
	rm -f $(OBJ)
	rm -f $(OBJ_B)

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT_BONUS)

re: fclean all
