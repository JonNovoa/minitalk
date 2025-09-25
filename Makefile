# **************************************************************************** #
#                                   MAKEFILE                                   #
# **************************************************************************** #

NAME_CLIENT = client
NAME_SERVER = server

SRC_DIR = src
INC_DIR = include

SRC_CLIENT = $(SRC_DIR)/client.c
SRC_SERVER = $(SRC_DIR)/server.c

OBJ_CLIENT = $(SRC_CLIENT:.c=.o)
OBJ_SERVER = $(SRC_SERVER:.c=.o)

LIBFT_DIR = libft
PRINTF_DIR = ft_printf

LIBFT = $(LIBFT_DIR)/libft.a
PRINTF = $(PRINTF_DIR)/libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(INC_DIR) -I$(LIBFT_DIR) -I$(PRINTF_DIR)

all: $(NAME_CLIENT) $(NAME_SERVER)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(PRINTF):
	$(MAKE) -C $(PRINTF_DIR)

$(NAME_CLIENT): $(OBJ_CLIENT) $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) $(OBJ_CLIENT) $(LIBFT) $(PRINTF) -o $(NAME_CLIENT)

$(NAME_SERVER): $(OBJ_SERVER) $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) $(OBJ_SERVER) $(LIBFT) $(PRINTF) -o $(NAME_SERVER)

clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	$(MAKE) clean -C $(PRINTF_DIR)
	rm -f $(OBJ_CLIENT) $(OBJ_SERVER)

fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR)
	$(MAKE) fclean -C $(PRINTF_DIR)
	rm -f $(NAME_CLIENT) $(NAME_SERVER)

re: fclean all

.PHONY: all clean fclean re
