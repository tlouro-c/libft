# Compiler and Flags

CC = cc
CFLAGS = -Wall -Wextra -Werror

# Other Variables

NAME = libft.a

OBJ = ft_atoi.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_strchr.o ft_strdup.o ft_strlcpy.o ft_strlen.o ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_tolower.o ft_toupper.o ft_calloc.o ft_itoa.o ft_strjoin.o ft_split.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memcmp.o ft_memchr.o ft_memmove.o ft_substr.o ft_strlcat.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o ft_strtrim.o ft_strmapi.o ft_striteri.o

BONUS = ft_lstnew.o ft_lstadd_front.o ft_lstsize.o ft_lstlast.o ft_lstadd_back.o ft_lstdelone.o ft_lstclear.o ft_lstiter.o ft_lstmap.o

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

ft_atoi.o: ft_atoi.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_isalnum.o: ft_isalnum.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_isalpha.o: ft_isalpha.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_isascii.o: ft_isascii.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_isdigit.o: ft_isdigit.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_isprint.o: ft_isprint.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_strchr.o: ft_strchr.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_strdup.o: ft_strdup.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_strlcpy.o: ft_strlcpy.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_strlen.o: ft_strlen.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_strncmp.o: ft_strncmp.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_strnstr.o: ft_strnstr.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_strrchr.o: ft_strrchr.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_tolower.o: ft_tolower.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_toupper.o: ft_toupper.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_calloc.o: ft_calloc.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_itoac.o: ft_itoa.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_strjoin.o: ft_strjoin.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_split.o: ft_split.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_memset.o: ft_memset.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_bzero.o: ft_bzero.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_memcpy.o: ft_memcpy.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_memcmp.o: ft_memcmp.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_memchr.o: ft_memchr.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_memmove.o: ft_memmove.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_substr.o: ft_substr.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_strlcat.o: ft_strlcat.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_putchar_fd.o: ft_putchar_fd.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_putstr_fd.o: ft_putstr_fd.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_putendl_fd.o: ft_putendl_fd.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_putnbr_fd.o: ft_putnbr_fd.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_strtrim.o: ft_strtrim.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_strmapi.o: ft_strmapi.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_striteri.o: ft_striteri.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_lstnew.o: ft_lstnew.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_lstadd_front.o: ft_lstadd_front.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_lstsize.o: ft_lstsize.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_lstlast.o: ft_lstlast.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_lstadd_back.o: ft_lstadd_back.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_lstdelone.o: ft_lstdelone.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_lstclear.o: ft_lstclear.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_lstiter.o: ft_lstiter.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

ft_lstmap.o: ft_lstmap.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(OBJ) $(BONUS)
	ar rcs $(NAME) $(OBJ) $(BONUS)

clean:
	rm -f $(OBJ) $(BONUS)

fclean: clean
	rm -f libft.a

re: fclean all
