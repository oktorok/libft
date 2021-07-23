#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jagarcia <jagarcia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/30 22:34:55 by jagarcia          #+#    #+#              #
#    Updated: 2018/07/01 21:38:10 by jagarcia         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

.PHONY : all clean fclean re

MAKEFLAGS += --silent

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

OBJ_DIR := objects/

SRC := $(shell cat files_list/libft_files.txt)

HEADERS := $(shell cat files_list/headers.txt)

INCLUDES_DIR = includes/

HEADERS_PATH = $(patsubst %.h, $(INCLUDES_DIR)%.h, $(HEADERS))

OBJ = $(patsubst %.c, $(OBJ_DIR)%.o, $(SRC))

MODE = 1

ifeq ($(MODE), 0)

all: $(NAME)

$(NAME): $(OBJ)

$(OBJ_DIR)%.o : %.c $(HEADERS_PATH)
	@printf "\r                                          "
	@printf "\r\033[92m--->Compiling $(@F)\033[0m"
	@gcc $(FLAGS) -I$(INCLUDES_DIR) -c $<
	@mkdir -p $(OBJ_DIR)
	@mv -f $(@F) $(OBJ_DIR)

else

$(NAME): $(OBJ)
	@ar rsc $(NAME) $(OBJ)
	@ranlib $(NAME)

$(OBJ_DIR)%.o : %.c $(HEADERS_PATH)
	@printf "\033[92mCompiling libft...\033[0m\n"
	@$(MAKE)  MODE=0
	@printf "\r                                          "
	@printf "\r\033[92mDone libft[\xE2\x9C\x94]\n\033[0m"

endif

clean:
	@printf "\033[92m<< Cleaning $(NAME) >>\n\033[0m"
	@rm -f $(OBJ)
	@rm -rf $(OBJ_DIR)

fclean: clean
	@printf "\r\033[92m<< Fcleaning $(NAME) >>\n\033[0m"
	@rm -f $(NAME)

re:	fclean
	@$(MAKE) 
