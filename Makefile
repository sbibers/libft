CC = cc

CFLAGS = -Wall -Wextra -Werror -I./include
# -I : find the header in include.

SRCS = $(shell cat srcs_file.txt)

OBJ_DIR = objs
# directory for objects file.

OBJS = $(SRCS:srcs/%.c=$(OBJ_DIR)/%.o)
# convert .c files to .o files to the path OBJ_DIR.

NAME = libft.a

GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
RED = \033[0;31m
CYAN = \033[0;36m
RESET = \033[0m

START_MSG = "$(CYAN)\n███████╗████████╗     ██████╗ ██╗   ██╗\n██╔════╝╚══██╔══╝    ██╔═══██╗██║   ██║\n███████╗   ██║       ██║   ██║██║   ██║\n╚════██║   ██║       ██║▄▄ ██║██║   ██║\n███████║   ██║       ╚██████╔╝╚██████╔╝\n╚══════╝   ╚═╝        ╚══▀▀═╝  ╚═════╝ \n\nStarting Build...$(RESET)\n"

END_MSG = "$(GREEN)\n███████╗██╗   ██╗██████╗ ███████╗███████╗\n██╔════╝██║   ██║██╔══██╗██╔════╝██╔════╝\n███████╗██║   ██║██████╔╝█████╗  █████╗  \n╚════██║██║   ██║██╔═══╝ ██╔══╝  ██╔══╝  \n███████║╚██████╔╝██║     ███████╗███████╗\n╚══════╝ ╚═════╝ ╚═╝     ╚══════╝╚══════╝\n\nBuild Completed!$(RESET)\n"

all: $(NAME)

$(NAME): $(OBJS)
	@echo $(START_MSG)
	@ar rcs $(NAME) $(OBJS)
	@echo $(END_MSG)

$(OBJ_DIR)/%.o: srcs/%.c
	@mkdir -p $(OBJ_DIR)
	@echo "$(YELLOW)Compiling $<...$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(BLUE)\n🧹 Cleaned object files.$(RESET)\n"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)\n🗑️ Fully cleaned project.$(RESET)\n"

re: fclean all

.PHONY: all clean fclean re
