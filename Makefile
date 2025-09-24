NAME_SERVER = server
NAME_CLIENT = client

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I./include -I./libft -I./ft_printf

SRC_DIR = src
SRCS_SERVER = $(SRC_DIR)/server.c
SRCS_CLIENT = $(SRC_DIR)/client.c

OBJS_SERVER = $(SRCS_SERVER:.c=.o)
OBJS_CLIENT = $(SRCS_CLIENT:.c=.o)

LIBFT = libft/libft.a
FTPRINTF = ft_printf/libftprintf.a

# ---------------------- REGLAS PRINCIPALES ---------------------- #

all: $(NAME_SERVER) $(NAME_CLIENT)

# Compila servidor
$(NAME_SERVER): $(OBJS_SERVER) $(LIBFT) $(FTPRINTF)
	$(CC) $(CFLAGS) $(OBJS_SERVER) $(LIBFT) $(FTPRINTF) -o $(NAME_SERVER)

# Compila cliente
$(NAME_CLIENT): $(OBJS_CLIENT) $(LIBFT) $(FTPRINTF)
	$(CC) $(CFLAGS) $(OBJS_CLIENT) $(LIBFT) $(FTPRINTF) -o $(NAME_CLIENT)

# Compila objetos genéricos
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# ---------------------- LIBS ---------------------- #

$(LIBFT):
	$(MAKE) -C libft

$(FTPRINTF):
	$(MAKE) -C ft_printf

# ---------------------- LIMPIEZA ---------------------- #

clean:
	rm -f $(OBJS_SERVER) $(OBJS_CLIENT)
	$(MAKE) -C libft clean
	$(MAKE) -C ft_printf clean

fclean: clean
	rm -f $(NAME_SERVER) $(NAME_CLIENT)
	$(MAKE) -C libft fclean
	$(MAKE) -C ft_printf fclean

re: fclean all