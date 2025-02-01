/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_sx.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:45:42 by omaezzem          #+#    #+#             */
/*   Updated: 2025/01/25 10:18:31 by omaezzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_swap(t_stck *stck)
{
	int	tmp;

	if (!stck || !(stck->next) || (ft_lstsize(stck) < 2))
		return ;
	tmp = stck->data;
	stck->data = stck->next->data;
	stck->next->data = tmp;
}

void	do_sa(t_stck **stack_a)
{
	ft_swap(*stack_a);
	write (1, "sa\n", 3);
}

void	do_sb(t_stck **stack_b)
{
	ft_swap(*stack_b);
	write(1, "sb\n", 3);
}

void	do_ss(t_stck **stack_a, t_stck **stack_b)
{
	ft_swap(*stack_a);
	ft_swap(*stack_b);
	write (1, "ss\n", 3);
}
