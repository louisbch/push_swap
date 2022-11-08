# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbouchon <lbouchon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 10:29:31 by lbouchon          #+#    #+#              #
#    Updated: 2022/11/08 15:10:43 by lbouchon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
RM = rm -rf
DIR = srcs/
CC = gcc
CFLAGS = -Wall -Wextra -Werror
NORMINETTE = norminette

SRCS = $(DIR)check_args.c		\
		$(DIR)ft_split.c		\
		$(DIR)ft_utils.c		\
		$(DIR)main.c			\
		$(DIR)move.c			\
		$(DIR)ft_utils2.c		\
		$(DIR)cell.c			\

OBJS = ${SRCS:.c=.o}

all : ${NAME}

${NAME} : ${OBJS}
		@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
		@echo "\033[0;42mPush_swap is now compile !\033[0m"

clean :
		${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

%.o: %.c
		@echo "\033[1;33mCompiling push_swap...\033[0m"
		${CC} ${FLAGS} -o $@ -c $<

norm :
		${NORMINETTE}

.PHONY: all clean fclean re norm