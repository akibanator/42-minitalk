CLIENT = client
SERVER = server

UTILS = ./utils_1.c	\
		./utils_2.c
FILES_S = ./server.c
FILES_C = ./client.c

OBJ_UTILS = $(UTILS:.c=.o)
OBJ_SERVER = $(FILES_S:.c=.o)
OBJ_CLIENT = $(FILES_C:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

all: $(CLIENT) $(SERVER)

$(CLIENT): $(OBJ_CLIENT) $(OBJ_UTILS)
	@$(CC) $(CFLAGS) $(OBJ_CLIENT)  $(OBJ_UTILS) -o $(CLIENT)

$(SERVER): $(OBJ_SERVER) $(OBJ_UTILS)
	@$(CC) $(CFLAGS) $(OBJ_SERVER) $(OBJ_UTILS) -o $(SERVER)

bonus: all

clean:
	@$(RM) $(OBJ_CLIENT) $(OBJ_SERVER) $(OBJ_UTILS)

fclean:	clean
	@$(RM) server client

re: fclean all
