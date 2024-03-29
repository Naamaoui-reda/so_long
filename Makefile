# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnaamaou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/11 20:43:11 by rnaamaou          #+#    #+#              #
#    Updated: 2022/03/11 20:43:13 by rnaamaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

NAME_SRC = main.c

NAME_OBJ = main.o

#BONUS = checker

#BONUS_SRC = checker.c \
			checker_utils.c

HEADER = main.h

LIBFT = libft/libft.a

MAKE_LIBFT = libft/

SRC = utils1.c init_mlx.c get_next_line.c parse.c ft_strlen_map.c error.c draw_utils.c draw.c check_map.c moving_player.c hit_wall.c free_everything.c

SRC_OBJ = ${SRC:%c=%o} 


CC = cc

FLAGS = -Wall -Wextra

MLX_FLAGS =  -lmlx -framework OpenGL -framework AppKit

all : ${NAME}

${LIBFT} : libft/libft.h
	make -C ${MAKE_LIBFT}

${NAME} : ${NAME_OBJ} ${SRC_OBJ} ${LIBFT}
	${CC} ${FLAGS} ${MLX_FLAGS} $^ -o ${NAME}


%.o : %.c ${HEADER}
	${CC} ${FLAGS} -c $<

clean :
	rm -f ${SRC_OBJ} ${NAME_OBJ}
	rm -f ${BONUS_OBJ}
	@make clean -C ${MAKE_LIBFT}

fclean : clean
	rm -f ${NAME}
	rm -f ${BONUS}
	@make fclean -C ${MAKE_LIBFT}

re : fclean all

.PHONY : clean fclean all re
