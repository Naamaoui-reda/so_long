# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnaamaou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 17:34:09 by rnaamaou          #+#    #+#              #
#    Updated: 2021/11/13 19:06:39 by rnaamaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME    = libft.a

SRCS    =  ft_isdigit.c ft_memset.c ft_isprint.c ft_strlcat.c\
           ft_strlcpy.c ft_tolower.c ft_bzero.c ft_strlen.c\
           ft_toupper.c ft_isalnum.c ft_strncmp.c ft_isalpha.c ft_memcpy.c ft_strchr.c\
           ft_strnstr.c ft_isascii.c ft_memmove.c ft_strrchr.c\
           ft_memcpy.c ft_calloc.c ft_strdup.c ft_memchr.c\
           ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c\
           ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
           ft_strmapi.c ft_atoi.c ft_split.c ft_striteri.c ft_memcmp.c

SRCS_BONUS	=	ft_lstnew.c ft_lstiter.c ft_lstadd_back.c ft_lstlast.c ft_lstdelone.c\
			ft_lstclear.c ft_lstadd_front.c ft_lstsize.c ft_lstmap.c 

HEAD	=	libft.h

OBJS_BONUS	=	$(SRCS_BONUS:.c=.o)

OBJS	=	$(SRCS:.c=.o)


FLAGS	=	-Wall -Werror -Wextra

CC	=	cc

all	:   $(NAME)

$(NAME)	:	$(OBJS) $(HEAD)
	@ar rcs	$@	$^

bonus:	$(OBJS) $(OBJS_BONUS) $(HEAD)
	@ar rcs  $@ $^

%.o	:	%.c
	@$(CC) $(FLAGS) -c $<

clean:
	rm -f $(OBJS) $(OBJS_BONUS)

fclean:	clean
	rm	-f	$(NAME)

re: fclean all
