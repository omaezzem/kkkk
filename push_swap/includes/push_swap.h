/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:46:47 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/29 10:54:45 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

// input_check 

int		is_digit(char c);
int		is_sign(char c);
int		checker(char *av);
int		check_space(char *av);

// utilis 

int		count_str(char *str, char c);
int		ft_strlen(const char *str);
int		ft_atoi(const char *str);
void	free_memory(char **split);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	**ft_split(char const *s, char c);

// struct 

typedef struct s_stck
{
	int				data;
	int				index;
	struct s_stck	*next;
}				t_stck;

// modify_list

t_stck	*ft_lstnew(int content);
void	ft_lstclear(t_stck **lst);
void	ft_lstadd_back(t_stck **lst, t_stck *new);
void	ft_lstadd_front(t_stck **lst, t_stck *new);
int		ft_lstsize(t_stck *lst);
t_stck	*get_bottom(t_stck *stack);
t_stck	*ft_lstlast(t_stck *lst);

// indexing
void	indexing(t_stck **head);
//sort
void	do_sa(t_stck **stack_a);
void	do_sb(t_stck **stack_b);
void	do_ss(t_stck **stack_a, t_stck **stack_b);
void	do_ra(t_stck **stack_a);
void	do_rb(t_stck **stack_b);
void	do_rr(t_stck **stack_a, t_stck **stack_b);
void	do_rra(t_stck **stack_a);
void	do_rrb(t_stck **stack_b);
void	do_pa(t_stck **stack_a, t_stck **stack_b);
void	do_pb(t_stck **stack_a, t_stck **stack_b);
void	rotate(t_stck **stack);
void	reverse_rotate(t_stck **stack);
void	sorting_two(t_stck **head);
void	sorting_three(t_stck **head);
void	sorting_foor(t_stck **head_a, t_stck **head_b);
void	sorting_five(t_stck **head_a, t_stck **head_b);
void	part_one(t_stck **stack_a, t_stck **stack_b);
void	part_two(t_stck **stack_a, t_stck **stack_b);
void	part_three(int pos, int len, t_stck **stack_b);
void	norm_five(int poszero, t_stck **head_a);
void	norm_foor(int pos, t_stck **head_a);
void	checksort(t_stck **head);

// check_doubles  
void	checkdoubles(t_stck **head_a);

// src
void	ft_chck_morethantwo(char **av, int i);
void	ft_chckone(char **av, int i);

#endif
