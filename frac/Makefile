# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thgeorge <thgeorge@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 08:05:26 by thgeorge          #+#    #+#              #
#    Updated: 2017/01/12 14:45:52 by thgeorge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



			#          	   	   #
			#   GENERAL VARS   #
			#				   #

NAME 			= 	fdf

CC				=	gcc
CFLAGS 			=	-Wall -Werror -Wextra

SRC_PATH 		= 	./src
INC_PATH		=	./inc

LIB_PATH		=	./libft
OBJ_PATH		=	./libft

MINILIBX_FLAGS	=	-lmlx -framework OpenGL -framework AppKit
MINILIBX_PATH	=	minilibx_macos_sierra
MINILIBX_NAME	=	libmlx.a


			#          		 #
			#   FILES NAME   #
			#				 #

LIB_NAME	=	libft.a

SRC_NAME	=	main.c				\
				isometric.c			\
				hooks_handler.c		\
				errors_handler.c	\
				parsing.c			\
				drawing.c           \
				structs.c			\
				print_pixels.c


INC_NAME	=	fdf.h




			#            #
			#   ACCESS   #
			#            #

SRC 		=	$(addprefix $(SRC_PATH)/,$(SRC_NAME))
INC 		=	$(addprefix $(INC_PATH)/,$(INC_NAME))
LIB			=	$(addprefix $(LIB_PATH)/,$(LIB_NAME))
MINILIBX	=	$(addprefix $(MINILIBX_PATH)/,$(MINILIBX_NAME))




			#           #
			#   RULES   #
			#           #

.PHONY:	all nn clean fclean syntax re


all:	$(NAME)

$(NAME):
		@printf $(PS_BLU) "=== →  Compiling the libs  ← ==="
		@make -C $(LIB_PATH)
		@printf $(PS_GRN) "=== →  Compiling the project  ← ==="
		@$(CC) $(CFLAGS) $(SRC) $(LIB) $(MINILIBX_FLAGS) -I $(INC) -o $(NAME)

nn:
		@echo "\n"
		@printf $(PS_GRN) "=== →  Norminette  ← ==="
		@echo "\n"
		@printf $(P_YEL) " →  Sources  ←"
		@norminette $(SRC)
		@echo "\n"
		@printf $(P_YEL) " →  Headers  ←"
		@norminette $(INC)

exe:
		@printf $(P_CYA) "    →  Executing"
		@echo "\n"
		@./$(NAME) test_maps/42.fdf

clean:
		@printf $(P_MAG) "    →  Removing tmp files"
		@make clean -C $(LIB_PATH)

fclean: clean
		@echo "\n"
		@printf $(P_MAG) "    →  Removing binaries"
		@make fclean -C $(LIB_PATH)
		@rm -f $(NAME)
		@echo "\n"

syntax:
		clear
		@printf $(PS_RED) "=== →  Checking syntax  ← ==="
		@echo "\n"
		@$(CC) -fsyntax-only $(CFLAGS) $(SRC)

re:		fclean all

cc: 	re clean




			#          			  #
			#   PRINTF COLORING   #
			#			          #


# Textes colores non soulignes
P_RED		=	"\e[31;m%s\e[0m\n"
P_GRN		=	"\e[32;m%s\e[0m\n"
P_YEL		=	"\e[33;m%s\e[0m\n"
P_BLU		=	"\e[34;m%s\e[0m\n"
P_MAG		=	"\e[35;m%s\e[0m\n"
P_CYA		=	"\e[36;m%s\e[0m\n"

# Textes colores soulignes
PS_RED		=	"\e[31;4m%s\e[0m\n"
PS_GRN		=	"\e[32;4m%s\e[0m\n"
PS_YEL		=	"\e[33;4m%s\e[0m\n"
PS_BLU		=	"\e[34;4m%s\e[0m\n"
PS_MAG		=	"\e[35;4m%s\e[0m\n"
PS_CYA		=	"\e[36;4m%s\e[0m\n"
