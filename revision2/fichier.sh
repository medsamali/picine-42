# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    fichier.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By:  msamaali  <  msamaali@student.42.fr  >    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/17 19:03:32 by  msamaali         #+#    #+#              #
#    Updated: 2024/07/17 19:22:30 by  msamaali        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR     = ./srcs/
HEAD_DIR    = ./includes/
SRCS        = ${SRC_DIR}ft_putchar.c\
              ${SRC_DIR}ft_swap.c\
              ${SRC_DIR}ft_putstr.c\
              ${SRC_DIR}ft_strlen.c\
              ${SRC_DIR}ft_strlen.c\
              ${SRC_DIR}ft_strcmp.c
HEAD        = ${HEAD_DIR}ft.h
OBJS        = ${SRCS:.c=.o}
NAME        = libft.a
CC          = gcc
RM          = rm -f
CFLAGS      = -Wall -Werror -Wextra
.c.o:       
              ${cc} ${CFLAGS} -I${HEAD_DIR} -c$< -o ${<:.c=.o}
${NAME}:      ${OBJS}
              ar -rcs ${NAME} ${OBJS}

all:          ${NAME}

clean:        
              ${RM} ${OBJS} 

fclean:       clean
              ${RM} ${NAME}

re:           fclean all 

.PHONY:       all clean fclean re                                                                 