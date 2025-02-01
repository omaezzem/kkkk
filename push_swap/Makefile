# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/21 11:05:01 by omaezzem          #+#    #+#              #
#    Updated: 2025/01/29 11:02:44 by omaezzem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAME_BONUS = checker
 
CC = cc

CFLAGS = -Wall -Wextra -Werror

MAIN_SOURCES =  modify_list/ft_last.c modify_list/ft_lst_addfront.c modify_list/ft_lstadd_back.c modify_list/ft_lstclear.c modify_list/ft_lstnew.c modify_list/ft_lstsize.c modify_list/get_bottom.c \
sort/do_px.c sort/do_rrx.c sort/do_rx.c sort/do_sx.c sort/foor_five_norm.c sort/reverse_rotate.c sort/rotate.c sort/sort_morefive.c sort/sorting.c src/checksort.c \
src/checkone.c src/double.c src/indexing.c src/morethantwo.c src/push_swp.c src/scanone.c src/utilis.c \
utils/ft_atoi.c utils/ft_strlcpy.c utils/ft_strlen.c utils/split.c

MAIN_BSOURSES = bonus/checkone_bonus.c bonus/double_bonus.c bonus/indexing_bonus.c bonus/morethantwo_bonus.c bonus/push_swap_bonus.c bonus/scanone_bonus.c bonus/utilis_bonus.c bonus/read_operations.c bonus/sortlines.c\
bonus/utils_bonus/ft_atoi_bonus.c bonus/utils_bonus/ft_strlcpy_bonus.c bonus/utils_bonus/ft_strlen_bonus.c bonus/utils_bonus/split.c bonus/utils_bonus/ft_strcmp.c \
bonus/modify_list/ft_last.c bonus/modify_list/ft_lst_addfront.c bonus/modify_list/ft_lstadd_back.c bonus/modify_list/ft_lstclear.c \
bonus/modify_list/ft_lstnew.c bonus/modify_list/ft_lstsize.c bonus/modify_list/get_bottom.c \
bonus/modify_list_bonus/ft_last_bonus.c bonus/modify_list_bonus/ft_lst_addfront_bonus.c bonus/modify_list_bonus/ft_lstadd_back_bonus.c \
bonus/modify_list_bonus/ft_lstclear_bonus.c bonus/modify_list_bonus/ft_lstnew_bonus.c bonus/modify_list_bonus/ft_lstsize_bonus.c bonus/modify_list_bonus/get_bottom_bonus.c \
bonus/sort_bonus/do_px_bonus.c bonus/sort_bonus/do_rrx_bonus.c bonus/sort_bonus/do_rx_bonus.c bonus/sort_bonus/do_sx_bonus.c bonus/sort_bonus/reverse_rotate_bonus.c bonus/sort_bonus/rotate_bonus.c\
bonus/get_next_line/get_next_line.c bonus/get_next_line/get_next_line_utils.c 


MAIN_OBJECTS = $(MAIN_SOURCES:.c=.o)
MAIN_BOBJECTS = $(MAIN_BSOURSES:.c=.o)

all : $(NAME)

$(MAIN_OBJECTS):%.o: %.c includes/push_swap.h
	$(CC) -c $(CFLAGS) $< -o $@

$(NAME) : $(MAIN_OBJECTS)
	$(CC) $(CFLAGS) $(MAIN_OBJECTS) -o $(NAME)


bonus : $(NAME_BONUS)

$(MAIN_BOBJECTS):%.o: %.c bonus/checker_bonus.h
	$(CC) -c $(CFLAGS) $< -o $@

$(NAME_BONUS) : $(MAIN_BOBJECTS)
	$(CC) $(CFLAGS) $(MAIN_BOBJECTS) -o $(NAME_BONUS)

clean :
	@rm -f $(MAIN_OBJECTS)
	@rm -f $(MAIN_BOBJECTS)

fclean : clean
	@rm -f $(NAME) $(NAME_BONUS)

re : fclean all