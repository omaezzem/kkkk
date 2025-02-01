/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 12:09:11 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/29 10:55:15 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "get_next_line/get_next_line.h"

// input_check 

int		is_digit(char c);
int		is_sign(char c);
int		checker(char *av);
int		check_space(char *av);
// utilis 
int		count_str(char *str, char c);
int		ft_atoi(const char *str);
void	free_memory(char **split);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	**ft_split(char const *s, char c);
int		ft_strcmp(char *s1, char *s2);

// struct

typedef struct s_stck
{
	int				data;
	int				index;
	struct s_stck	*next;
}					t_stck;

typedef struct s_check
{
	char			*data;
	struct s_check	*next;
}					t_check;

// modify list 

t_stck	*ft_lstnew(int content);
void	ft_lstclear(t_stck **lst);
void	ft_lstadd_back(t_stck **lst, t_stck *new);
void	ft_lstadd_front(t_stck **lst, t_stck *new);
int		ft_lstsize(t_stck *lst);
t_stck	*ft_lstlast(t_stck *lst);
t_stck	*get_bottom(t_stck *stack);

// check_doubles 

void	checkdoubles(t_stck **head_a);

// indexing
void	indexing(t_stck **head);

// src

void	ft_chckone_bonus(char **av, int i);
void	ft_chck_morethantwo_bonus(char **av, int i);
// void	scan(char **av, int len);

// modify_list

t_check	*ft_lstnew_bonus(char *content);
void	ft_lstclear_bonus(t_check **lst);
void	ft_lstadd_back_bonus(t_check **lst, t_check *new);
void	ft_lstadd_front_bonus(t_check **lst, t_check *new);
int		ft_lstsize_bonus(t_check *lst);
t_check	*ft_lstlast_bonus(t_check *lst);
t_check	*get_bottom_bonus(t_check *stack);
int		ft_strcmp(char *s1, char *s2);

void	do_sa_bonus(t_stck **stack_a);
void	do_sb_bonus(t_stck **stack_b);
void	do_ss_bonus(t_stck **stack_a, t_stck **stack_b);
void	do_ra_bonus(t_stck **stack_a);
void	do_rb_bonus(t_stck **stack_b);
void	do_rr_bonus(t_stck **stack_a, t_stck **stack_b);
void	do_rra_bonus(t_stck **stack_a);
void	do_rrb_bonus(t_stck **stack_b);
void	do_rrr_bonus(t_stck **stack_a, t_stck **stack_b);
void	do_pa_bonus(t_stck **stack_a, t_stck **stack_b);
void	do_pb_bonus(t_stck **stack_a, t_stck **stack_b);
void	rotate_bonus(t_stck **stack);
void	reverse_rotate_bonus(t_stck **stack);

int		sort_lines(t_check *lines, t_stck **stack_a, t_stck **stack_b);
int		check_sort(t_stck *head_a);
void	do_line_by_line(t_check **check, t_stck **stack_a, t_stck **stack_b);
int		read_operations(t_check **head_a);
void	addto_list(char *line, t_check **head_a);
int		checkline(t_check **head_a, char *line);
void	sort_bonus(t_stck **head_a, t_stck **head_b);

#endif
